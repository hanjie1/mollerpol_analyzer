///////////////////////////////////////////////////////////////////////////////
//                                                                           //
// MollerPolElement                                                                //
//                                                                           //
///////////////////////////////////////////////////////////////////////////////


#include <iostream>
#include "MollerPolGEMElement.h"
#include "DataType.h"

ClassImp(MollerPolElement);

///////////////////////////////////////////////////////////////////////////////
// Constructor for generic Element (no-data)
MollerPolElement::MollerPolElement(Double_t x, Double_t y,
    Double_t z, Int_t row, Int_t col, Int_t layer, Int_t id) :
  fX(x), fY(y), fZ(z), fE(0), fAgain(0), fAtime(kBig), fRow(row), fCol(col), fLayer(layer),
  fStat(0), fID(id), fADC(nullptr), fWaveform(nullptr)
{
}

///////////////////////////////////////////////////////////////////////////////
MollerPolElement::~MollerPolElement()
{
  delete fADC;
  delete fWaveform;
}

///////////////////////////////////////////////////////////////////////////////
// Check if this block has any ADC data
Bool_t MollerPolElement::HasData()
{
  return ( ( fADC && fADC->HasData() ) || ( fWaveform && fWaveform->HasData() ) );
}

// Check if this block has any ADC data
Bool_t MollerPolElement::HasADCData()
{
  return ( ( fADC && fADC->HasData() ) || ( fWaveform && fWaveform->HasData() ) );
}


///////////////////////////////////////////////////////////////////////////////
// Clear event from generic Element (with no data)
void MollerPolElement::Clear( Option_t* opt )
{
  fE = 0; // Reset calibrated energy for given event
  fAgain = 0.;
  fStat = 0; // Reset status to 0, unseen
  if(fADC)
    fADC->Clear();
  if(fWaveform)
    fWaveform->Clear();
  fAtime = kBig;
}

///////////////////////////////////////////////////////////////////////////////
// Create a single-valued ADC data structure
void MollerPolElement::SetADC(Double_t ped, Double_t gain)
{
  delete fADC;
  fADC = new MollerPolData::ADC(ped,gain);
}

///////////////////////////////////////////////////////////////////////////////
// Create a multi-valued ADC data structure
void MollerPolElement::SetWaveform(Double_t ped, Double_t gain, Double_t ChanToMv, Double_t adc_timecut)
{
  delete fWaveform;
  fWaveform = new MollerPolData::Waveform(ped,gain,ChanToMv,adc_timecut);
}

