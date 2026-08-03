#include "MollerPolGEMSpectrometer.h"

using namespace std;

ClassImp(MollerPolGEMSpectrometer)


//_____________________________________________________________________________
MollerPolGEMSpectrometer::MollerPolGEMSpectrometer( const char* name, const char* description ) :
  THaSpectrometer( name, description )
{
  // Constructor. Defines standard detectors

}

//_____________________________________________________________________________
MollerPolGEMSpectrometer::~MollerPolGEMSpectrometer()
{
  // Destructor
}

//_____________________________________________________________________________
  Int_t MollerPolGEMSpectrometer::FindVertices( TClonesArray& /* tracks */ )
{
  // Reconstruct target coordinates for all tracks found.

  // TODO

  return 0;
}

//_____________________________________________________________________________
Int_t MollerPolGEMSpectrometer::TrackCalc()
{
  // Additioal track calculations

  // TODO

  return 0;
}
