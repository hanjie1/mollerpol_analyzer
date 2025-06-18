#ifndef Podd_MollerPolApparatus_h_
#define Podd_MollerPolApparatus_h_

//////////////////////////////////////////////////////////////////////////
//
// MollerPolApparatus
//
//////////////////////////////////////////////////////////////////////////

#include "THaApparatus.h"

class MollerPolApparatus : public THaApparatus {

public:
  explicit MollerPolApparatus( const char* name="M",
                          const char* description="Moller Polarimeter Apparatus" );
  virtual ~MollerPolApparatus();

  virtual void  Clear( Option_t* opt="");
  virtual Int_t Reconstruct();

protected:

  Int_t  fNtotal;  // Total number of hits in all detectors

  virtual Int_t DefineVariables( EMode mode = kDefine );

  ClassDef(MollerPolApparatus,0) // An example apparatus
};

#endif
