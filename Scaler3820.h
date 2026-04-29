#ifndef Podd_Scaler3820_h_
#define Podd_Scaler3820_h_

/////////////////////////////////////////////////////////////////////
//
//   Scaler3820
//   SIS (Struck) model 3820 scaler
//
/////////////////////////////////////////////////////////////////////

#include "GenScaler.h"

namespace Decoder {

class Scaler3820 : public GenScaler {

public:

   Scaler3820( UInt_t crate, UInt_t slot );
   Scaler3820() = default;
   virtual ~Scaler3820() = default;

   using GenScaler::Init;
   virtual void Init();

private:

   static TypeIter_t fgThisType;

   ClassDef(Scaler3820,0)  // SIS model 3820 scaler

};

}

#endif
