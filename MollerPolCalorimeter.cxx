//*-- Author :    Hanjie Liu   June 2025
//Based on https://github.com/JeffersonLab/analyzer/tree/master/SDK/UserDetector.cxx
//
//
///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// MollerPolCalorimeter                                                      //
//                                                                           //
// Example of a user-defined detector class. This class implements a         //
// completely new detector from scratch. Only ReadDatabase() and StoreHit()  //
// perform slightly non-trivial work. CoarseProcess/FineProcess must be      //
// implemented as needed.                                                    //
//                                                                           //
// See UserScintillator for an example of a detector class where the         //
// behavior of an existing detector (scintillator) is modified and extended. //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#include "MollerPolCalorimeter.h"
#include "VarDef.h"
#include "THaDetMap.h"
#include "Fadc250Module.h"
#include "Decoder.h"
#include "TMath.h"
#include "Helper.h"
// Needed in CoarseProcess/FineProcess if implemented
#include "THaTrack.h"
#include "TClonesArray.h"
#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace std;
using namespace Podd;

// Example of a hardcoded parameter (arbitrary value, see ReadDatabase).
// Generally not recommended. The day will come when someone needs more than this.
static const int MAXCHAN = 100;

// Constructors should initialize all basic-type member variables to safe
// default values. In particular, all pointers should be either zeroed or
// assigned valid data.
//_____________________________________________________________________________
MollerPolCalorimeter::MollerPolCalorimeter( const char* name, const char* description,
                            THaApparatus* apparatus )
  : THaNonTrackingDetector(name, description, apparatus)
{
  // Constructor
}

//_____________________________________________________________________________
MollerPolCalorimeter::~MollerPolCalorimeter()
{
  // Destructor. Remove variables from global list.

  // Unfortunately, we can't rely on one of the base classes to remove our
  // variables because of the way virtual functions are resolved in the scope
  // of destructors.
  // The following calls THaAnalysisObject::DefineVariablesWrapper(), and
  // the virtual function call to DefineVariables(kDelete) within that function
  // resolves to the DefineVariables implementation in this class, which would
  // not be the case if called from THaAnalysisObject's destructor.
  // Hence, RemoveVariables() should be called from the destructor of
  // every class that defines its own global variables through the standard
  // DefineVariables() mechanism, like this one does.
  RemoveVariables();
}

//_____________________________________________________________________________
Int_t MollerPolCalorimeter::ReadDatabase( const TDatime& date )
{
  // Read the database for this detector.
  // This function is called once at the beginning of the analysis.
  // 'date' contains the date/time of the run being analyzed.
  //
  // This routine is written for the simple file-based database scheme
  // of Analyzer 1.x. The format of the database file is up to the
  // author of the detector class. Here, we use key/value pairs to allow
  // for a free file format.

  const char* const here = "ReadDatabase";

  // Open the database file
  // NB: OpenFile() is in THaAnalysisObject. It will try to open a database
  // file named db_<fPrefix><fName>.dat (fPrefix is in THaAnalysisObject
  // and is typically the name of the apparatus containing this detector;
  // fName is the name of this object in TNamed).
  FILE* file = OpenFile( date );
  if( !file ) return kFileError;

  // All vectors should be cleared and all conditions variables should be set
  // to default values here.
  // NB: fPed and fGain will be set to default values below in case there are
  // no values for them in the database.
  Int_t nelem = 0;
  Double_t angle = 0.0;
  fPed.clear();
  fGain.clear();

  // The detector map.
  // This is a matrix of numerical values. Multiple lines are allowed.
  // The format is:
  //  detmap  <crate1> <slot1> <first channel1> <last channel1> <first logical ch1>
  //          <crate2> <slot2> <first channel2> <last channel2> <first logical ch2>
  //  etc.
  // The "first logical channel" is the one assigned to the first hardware channel.
  vector<Int_t> detmap;

  // Read the database. This may throw exceptions, so we put it in a try block.
  Int_t err = 0;

  // Automatically adjust the data type
  try {
    // Automatically determine which data type constants correspond to Data_t.
    // This can be ignored/removed if the member variables are hardcoded as
    // Float_t or Double_t.
//  VarType kDataType  = std::is_same<Data_t, Float_t>::value ? kFloat  : kDouble;
    VarType kDataTypeV = std::is_same<Data_t, Float_t>::value ? kFloatV : kDoubleV;

    // Set up an array of database requests. See VarDef.h for details.
    // If an optional parameter is not found in the database, the value of its
    // associated variable remains unchanged.
    const DBRequest request[] = {
      // Required items
      { "detmap",    &detmap, kIntV },         // Detector map
      { "nelem",     &nelem,  kInt,       0, false, -1}, // Number of elements (e.g. PMTs)
      // Optional items
      { "angle",     &angle,  kDouble,    0, true }, // Rotation angle about y (deg)
      //== CAUTION: kDoubleV here must match the type of Data_t
      { "pedestals", &fPed,   kDataTypeV, 0, true }, // Pedestals (optional)
      { "gains",     &fGain,  kDataTypeV, 0, true }, // Gains (optional)
      { nullptr }                                    // Last element must be nullptr
    };

    // Read the requested values
    err = LoadDB( file, date, request );

    // If no error, parse the detector map. See THaDetMap::Fill for details.
    if( err == kOK ) {
      if( FillDetMap( detmap, THaDetMap::kFillLogicalChannel, here ) <= 0 ) {
	err = kInitError;
      }
    }
  }
  // Catch exceptions here so that we can close the file and clean up
  catch(...) {
    fclose(file);
    throw; // Just rethrow the exception to exit, unless we have a better idea
  }

  // Normal end of reading the database
  fclose(file);
  if( err != kOK )
    return err;

  // Check all configuration values for sanity. This is the more tedious, but
  // nevertheless very important part of reading the database. In addition to
  // simple checking, this part may also include computation of derived
  // configuration parameters, for instance an allowed hit pattern or
  // geometry parameters. See the call to DefineAxes below as an example.
  if( nelem <= 0 ) {
    Error( Here(here), "Cannot have zero or negative number of elements. "
	   "Fix database." );
    return kInitError;
  }
  if( nelem > MAXCHAN ) {
    Error( Here(here), "Illegal number of elements = %d. Must be <= %d. "
	   "Fix database.", nelem, MAXCHAN );
    return kInitError;
  }

  // If the detector is already initialized, the number of elements must not
  // change. This prevents problems with global variables that
  // point to memory that is dynamically allocated.
  // Resizing a detector is hardly ever necessary for a given analysis,
  // so this catches database errors and simplifies the design of this class.
  if( fIsInit && nelem != fNelem ) {
    ostringstream ostr;
    ostr << "Cannot re-initialize with different number of elements. "
         << "(was: " << fNelem << ", now: " << nelem << "). "
         << "Detector not re-initialized.";
    Error( Here(here), "%s", ostr.str().c_str() );
    return kInitError;
  }

  // All ok - store nelem
  fNelem = nelem;

  // Check detector map size. We assume that each detector element (e.g. paddle)
  // has exactly one hardware channel. This could be different, e.g. if each PMT
  // is read by an ADC and a TDC, etc. Modify as appropriate.
  UInt_t nchan = fDetMap->GetTotNumChan(), nval = nelem;
  if( nchan != nval ) {
    ostringstream ostr;
    ostr << "Incorrect number of detector map channels = " << nchan
         << ". Must equal nelem = " << nval << ". Fix database.";
    Error( Here(here), "%s", ostr.str().c_str() );
    return kInitError;
  }

  // Check if the sizes of the arrays we read make sense.
  // NB: If we have an empty vector here, there was no database entry for it.
  if( !fPed.empty() && fPed.size() != nval) {
    ostringstream ostr;
    ostr << "Incorrect number of pedestal values = " << fPed.size()
         << ". Must match nelem = " << nval << ". Fix database.";
    Error( Here(here), "%s", ostr.str().c_str() );
    return kInitError;
  }
  if( !fGain.empty() && fGain.size() != nval) {
    ostringstream ostr;
    ostr << "Incorrect number of gain values = " << fGain.size()
         << ". Must match nelem = " << nval << ". Fix database.";
    Error( Here(here), "%s", ostr.str().c_str() );
    return kInitError;
  }

  // If any of the arrays were not given in the database, set them to defaults:
  // Pedestals default to zero, gains to 1.0.
  if( fPed.empty() )
    fPed.assign( nelem, 0.0 );
  if( fGain.empty() )
    fGain.assign( nelem, 1.0 );

  // Use the rotation angle to set the axes vectors
  // (required for display functions, for instance)
  // See THaDetectorBase::DefineAxes for details.
  const Double_t degrad = TMath::Pi()/180.0;
  DefineAxes(angle*degrad);

  fIsInit = true;

  return kOK;
}

//_____________________________________________________________________________
Int_t MollerPolCalorimeter::DefineVariables( EMode mode )
{
  // Define (or delete) global variables of this detector

  RVarDef vars[] = {
    { "chan",     "Channel number",                 "fEventData.fChannel" },
    { "nhit",     "Number of hits",                 "fEventData.fNHits" },
    { "ped",      "Pedestal",                       "fEventData.fPedestal" },
    { "pedq",     "Pedestal Quality",               "fEventData.fPedq" },
    { "nsamples", "number of ADC raw samples",      "fNumSamples" },
    { "samples_c","ADC raw samples channel number", "fSamples_c" },
    { "samples",  "ADC raw samples",                "fSamples" },
    { "adc_chan", "Hit channel number",             "fPulseData.fChannel" },
    { "adc",      "Pulse integral",                 "fPulseData.fRawADC" },
    { "adc_c",    "Calibrated Pulse integral",      "fPulseData.fCalADC" },
    { "adc_p",    "Pulse peak",                     "fPulseData.fPeak" },
    { "adc_t",    "Pulse time",                     "fPulseData.fT" },
    { "adc_o",    "Pulse overflow bit",             "fPulseData.fOverflow" },
    { "adc_u",    "Pulse underflow bit",            "fPulseData.fUnderflow" },
    { nullptr }
  };
  return DefineVarsFromList( vars, mode );
}

//_____________________________________________________________________________
void MollerPolCalorimeter::Clear( Option_t* opt )
{
  // Reset per-event data. This function is called before Decode() for
  // every event.

  THaNonTrackingDetector::Clear(opt);
  fEventData.clear();
  fPulseData.clear();
  fSamples.clear();
  fNumSamples=0;
  fSamples_c.clear();
}

//_____________________________________________________________________________
OptUInt_t MollerPolCalorimeter::LoadData( const THaEvData& evdata,
                                     const DigitizerHitInfo_t& hitinfo )
{
  // Callback from Decode()

  if( hitinfo.type == Decoder::ChannelType::kMultiFunctionADC ){

    auto* fadc = dynamic_cast <Decoder::Fadc250Module*> (hitinfo.module);

    if( !fadc )
      throw logic_error("Bad module type (expected Fadc250Module). "
                        "Should never happen. Call expert.");

      return evdata.GetData(Decoder::kPulseIntegral, hitinfo.crate, hitinfo.slot, hitinfo.chan, hitinfo.hit);
    }

  // default LoadData in THaDetectorBase, this returns FADC pulse integral of the first hit
  return evdata.GetData(hitinfo.crate, hitinfo.slot, hitinfo.chan, hitinfo.hit);

}

//_____________________________________________________________________________
Int_t MollerPolCalorimeter::StoreHit( const DigitizerHitInfo_t& hitinfo, UInt_t data )
{
  assert( hitinfo.nhit > 0 );

  // Use the logical detector channel to index the data. The logical channel
  // is calculated in THaDetMap::Module::ConvertToLogicalChannel as
  // d->first + hardware_channel - d->lo, where 'd' refers to the detector
  // map "Module" (= line in the database) corresponding to the frontend
  // where the hit was registered. It typically runs from 0 to nelem-1.

  Int_t chan = hitinfo.lchan;

  // Check if 'chan' is in range here as a bugcheck of the detector map logic.
  // Like asserts, such bugchecks may be skipped for better performance when
  // compiling production code with -DNDEBUG. Or you may keep them for more
  // safety, especially when some value depends on unpredictable input data.
#ifndef NDEBUG
  if( chan < 0 || chan >= fNelem )
    throw std::logic_error("MollerPolCalorimeter::StoreHit: invalid logical channel");
#endif

  auto* fadc = dynamic_cast<Decoder::Fadc250Module*>(hitinfo.module);
  assert(fadc);  // should have been caught in LoadData

  UInt_t nhits = fadc->GetNumEvents(Decoder::kPulseIntegral,chan);
  for( unsigned int ihit=0; ihit<nhits; ihit++){
    Data_t raw = fadc->GetData(Decoder::kPulseIntegral, hitinfo.chan, ihit);
    Data_t cal = (data - fPed[chan]) * fGain[chan];

    Data_t vpeak = fadc->GetData(Decoder::kPulsePeak, hitinfo.chan, ihit);
    Data_t ptime = fadc->GetData(Decoder::kPulseTime, hitinfo.chan, ihit)*0.0625;  // ns/count
    UInt_t pOverflow = fadc->GetOverflowBit(hitinfo.chan, ihit);
    UInt_t pUnderflow = fadc->GetUnderflowBit(hitinfo.chan, ihit);

    fPulseData.emplace_back(chan, raw, cal, vpeak, ptime, pOverflow, pUnderflow);
  }

  UInt_t ped = fadc->GetPulsePedestalData(hitinfo.chan, 0);
  UInt_t pedq = fadc->GetPedestalQuality(hitinfo.chan, 0);

  fEventData.emplace_back(chan, nhits, ped, pedq);

  fNumSamples = fadc->GetNumEvents(Decoder::kSampleADC,chan);
  if( fNumSamples!=0 ){
    vector<uint32_t> tmp = fadc->GetPulseSamplesVector(hitinfo.chan);
    fSamples.insert(std::end(fSamples), std::begin(tmp), std::end(tmp));
    fSamples_c.insert(std::end(fSamples_c),tmp.size(), chan);
  }


  // The return value is currently ignored by THeDetectorBase::Decode.
  return 0;
}

//_____________________________________________________________________________
Int_t MollerPolCalorimeter::CoarseProcess( TClonesArray& /* tracks */ )
{
  // Coarse processing. 'tracks' contains coarse tracks.

  return 0;
}

//_____________________________________________________________________________
Int_t MollerPolCalorimeter::FineProcess( TClonesArray& /* tracks */ )
{
  // Fine processing. 'tracks' contains final tracking results.

  return 0;
}

//_____________________________________________________________________________
// Helper macro to print a single field of a structure in a std::vector.
#define PrintArrayField(txt,var,field)           \
  cout << (txt) << " = ";                        \
  {                                              \
     if( (var).empty() )                         \
       cout << "(empty)";                        \
     else {                                      \
       for( auto it = (var).begin();             \
                 it != (var).end(); ++it ) {     \
         cout << (*it).field;                    \
         if( it+1 != (var).end() ) cout << ", "; \
       }                                         \
     }                                           \
  } cout << endl;

//_____________________________________________________________________________
void MollerPolCalorimeter::Print( Option_t* opt ) const
{
  // Print current configuration

  // It is always a good idea to have a Print method, if only for debugging

  THaDetector::Print(opt);
  cout << "detmap = "; fDetMap->Print();
  cout << "nelem = " << fNelem << endl;
  cout << "pedestals = "; PrintArray( fPed );
  cout << "gains = ";     PrintArray( fGain );
//  cout << "nhits = " << fEventData.size() << endl;
//  PrintArrayField("channel", fEventData, fChannel)
//  PrintArrayField("rawadc", fEventData, fRawADC)
//  PrintArrayField("coradc", fEventData, fCalADC)
}

////////////////////////////////////////////////////////////////////////////////

ClassImp(MollerPolCalorimeter)
