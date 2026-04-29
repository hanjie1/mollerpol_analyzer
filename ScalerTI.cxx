/**
   \class ScalerTI
   \ingroup Decoders

   \brief Decoder module to read the FADC250 scalers.

   These scalers are identified by a bank with the tag 9250.
*/

#include "ScalerTI.h"

using namespace std;

namespace Decoder {

Module::TypeIter_t ScalerTI::fgThisType =
  DoRegister( ModuleType( "Decoder::ScalerTI" , 9001 ));

ScalerTI::ScalerTI(Int_t crate, Int_t slot) : GenScaler(crate, slot) {
  Init();
}

ScalerTI::~ScalerTI() {
}

void ScalerTI::Init() {
  fNumChan = 12;
  fWordsExpect = 12;
  GenScaler::GenInit();
}

}

ClassImp(Decoder::ScalerTI)
