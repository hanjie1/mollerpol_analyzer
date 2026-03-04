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

class MollerPolGEMManager : public TObject {
public:
  MollerPolGEMManager();
  virtual ~MollerPolGEMManager();
  static MollerPolGEMManager *GetInstance();
  static void SetDefaultCrateMapName(const char* name);

  Decoder::THaCrateMap* GetCrateMap();

private:
  Decoder::THaCrateMap *fCrateMap;
  static TString fCrateMapName;
  static MollerPolGEMManager *fManager;

  ClassDef(MollerPolGEMManager,0) ///< Base class for MollerPol Manage
};

#endif//MollerPolMANAGER_H
