//////////////////////////////////////////////////////////////////////////
//
// Bare-bones MOLLERSpectrometer class 
// Used for testing.
//
//////////////////////////////////////////////////////////////////////////

#include "MOLLERSpectrometer.h"

using namespace std;

ClassImp(MOLLERSpectrometer)


//_____________________________________________________________________________
MOLLERSpectrometer::MOLLERSpectrometer( const char* name, const char* description ) :
  THaSpectrometer( name, description )
{
  // Constructor. Defines standard detectors

}

//_____________________________________________________________________________
MOLLERSpectrometer::~MOLLERSpectrometer()
{
  // Destructor
}

//_____________________________________________________________________________
  Int_t MOLLERSpectrometer::FindVertices( TClonesArray& /* tracks */ )
{
  // Reconstruct target coordinates for all tracks found.

  // TODO

  return 0;
}

//_____________________________________________________________________________
Int_t MOLLERSpectrometer::TrackCalc()
{
  // Additioal track calculations

  // TODO

  return 0;
}
