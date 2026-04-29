#ifndef ScalerTI_
#define ScalerTI_

/////////////////////////////////////////////////////////////////////
//
//   ScalerTI
//   FADC250 scalers
//
/////////////////////////////////////////////////////////////////////

#include "GenScaler.h"

namespace Decoder {

class ScalerTI : public GenScaler {

public:

   ScalerTI() {};
   ScalerTI(Int_t crate, Int_t slot);
   virtual ~ScalerTI();

   virtual void Init();

private:

   static TypeIter_t fgThisType;

   ClassDef(ScalerTI,0)  // FADC250 scalers

};

}

#endif
