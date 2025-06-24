#ifndef Podd_MollerPolCalorimeter_h_
#define Podd_MollerPolCalorimeter_h_

///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// MollerPolCalorimeter                                                              //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////

#include "THaNonTrackingDetector.h"
#include <vector>

class MollerPolCalorimeter : public THaNonTrackingDetector {

public:
  // Constructor(s) create an instance of this detector object.
  // This is how detectors are created in analysis scripts.
  explicit MollerPolCalorimeter( const char* name, const char* description = "",
                         THaApparatus* a = nullptr );

  // We must provide a default constructor (for technical reasons)!
  // If the detector class defines any raw pointers as data members, they
  // must be initialized to nullptr here. Otherwise "default" will do.
  MollerPolCalorimeter() = default;

  // If any global variables are created by DefineVariables, the destructor
  // must be implemented to clean them up. Likewise for any memory allocated
  // on the heap with "new".
  virtual ~MollerPolCalorimeter();

  // Public base class functions that one typically overrides
  // (see comments in MollerPolCalorimeter.cxx for details)
  virtual void   Clear( Option_t* opt="" );
  virtual Int_t  CoarseProcess( TClonesArray& tracks );
  virtual Int_t  FineProcess( TClonesArray& tracks );
  virtual void   Print( Option_t* opt="" ) const;

  Int_t GetNhits() const { return static_cast<Int_t>(fEventData.size()); }

protected:
  // Almost every detector needs to override these functions:
  // Read configuration parameters from the database
  virtual Int_t  ReadDatabase( const TDatime& date );
  // Define "global variables" holding results from analyzing this detector
  virtual Int_t  DefineVariables( EMode mode );

//  Int_t  StoreHit( const DigitizerHitInfo_t& hitinfo, UInt_t data );
  OptUInt_t  LoadData( const THaEvData& evdata, const DigitizerHitInfo_t& hitinfo );
  Int_t   Decode( const THaEvData& );
  //---- Data stored with this detector follow here ----

  typedef std::vector<Data_t> DataVec_t;

  // Calibration data from database
  DataVec_t fPed;       // ADC pedestals
  DataVec_t fGain;      // ADC gains

  // FADC data per hit
  class FADCData {
  public:
    Data_t  fRawADC;    // Pulse integral
    Data_t  fCalADC;    // Pedestal-subtracted and gain-calibrated ADC data
    Data_t  fPeak;      // ADC peak value
    Data_t  fT;         // TDC time
    UInt_t  fOverflow;  // FADC pulse overflow bit
    UInt_t  fUnderflow; // FADC pulse underflow bit

    // Define a constructor so we can fill all fields in one line
    FADCData(Data_t raw, Data_t cal, Data_t vpeak, Data_t ptime, UInt_t pOverflow, UInt_t pUnderflow)
      : fRawADC(raw), fCalADC(cal), fPeak(vpeak), fT(ptime), fOverflow(pOverflow), fUnderflow(pUnderflow) {}

    void clear(){
         fRawADC = fCalADC = fPeak = kBig;
         fT = 0;
         fOverflow = fUnderflow = 0;
    }

  };

  // Per-event data
  // Define a structure to hold the information of one hit
  class EventData {
  public:
    Int_t   fNHits;     // Total number of hits for all channels

    Int_t   fChannel;   // Logical channel number
    Data_t  fSamples[500]; // Raw adc samples (mode 10)
    UInt_t  fPedq;      // FADC pedestal quality bit
    Data_t  fPedestal;  // Extracted pedestal value

    std::vector<FADCData> fHitData; // FADC pulse data per hit
  };

  // Vector with the hit information for the current event
  std::vector<EventData> fEventData;

  ClassDef(MollerPolCalorimeter,0)   // Example detector
};

////////////////////////////////////////////////////////////////////////////////

#endif
