////////////////////////////////////////////////////////////////////
//
//   Scaler3820
//   SIS Struck 3820 scaler.  It has 32 channels and runs in
//      a FIFO mode
//
/////////////////////////////////////////////////////////////////////

#include "Scaler3820.h"

using namespace std;

namespace Decoder {

Module::TypeIter_t Scaler3820::fgThisType =
  DoRegister( ModuleType( "Decoder::Scaler3820" , 3820 ));

Scaler3820::Scaler3820( UInt_t crate, UInt_t slot )
  : GenScaler(crate, slot)
{
  Scaler3820::Init();
}

void Scaler3820::Init()
{
  fNumChan = 32;
  fWordsExpect = 32;
  GenScaler::GenInit();
}

}

ClassImp(Decoder::Scaler3820)
