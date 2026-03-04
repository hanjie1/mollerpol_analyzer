//////////////////////////////////////////////////////////////////////////
//
// Bare-bones MollerPolSpectrometer class 
// Used for testing.
//
//////////////////////////////////////////////////////////////////////////

#include "MollerPolSpectrometer.h"

using namespace std;

ClassImp(MollerPolSpectrometer)


//_____________________________________________________________________________
MollerPolSpectrometer::MollerPolSpectrometer( const char* name, const char* description ) :
  THaSpectrometer( name, description )
{
  // Constructor. Defines standard detectors

}

//_____________________________________________________________________________
MollerPolSpectrometer::~MollerPolSpectrometer()
{
  // Destructor
}

//_____________________________________________________________________________
  Int_t MollerPolSpectrometer::FindVertices( TClonesArray& /* tracks */ )
{
  // Reconstruct target coordinates for all tracks found.

  // TODO

  return 0;
}

//_____________________________________________________________________________
Int_t MollerPolSpectrometer::TrackCalc()
{
  // Additioal track calculations

  // TODO

  return 0;
}
