#ifndef MollerPolMANAGER_H
#define MollerPolMANAGER_H

///////////////////////////////////////////////////////////////////////////////
//  - 2021-02-25 Juan Carlos Cornejo <cornejo@jlab.org>
//  * Create this global (instanton) class

#include <TString.h>
#include <TObject.h>


namespace Decoder {
  class THaCrateMap;
}

class MollerPolManager : public TObject {
public:
  MollerPolManager();
  virtual ~MollerPolManager();
  static MollerPolManager *GetInstance();
  static void SetDefaultCrateMapName(const char* name);

  Decoder::THaCrateMap* GetCrateMap();

private:
  Decoder::THaCrateMap *fCrateMap;
  static TString fCrateMapName;
  static MollerPolManager *fManager;

  ClassDef(MollerPolManager,0) ///< Base class for MollerPol Manage
};

#endif//MollerPolMANAGER_H
