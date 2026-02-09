#ifndef MOLLERMANAGER_H
#define MOLLERMANAGER_H

///////////////////////////////////////////////////////////////////////////////
//  - 2021-02-25 Juan Carlos Cornejo <cornejo@jlab.org>
//  * Create this global (instanton) class

#include <TString.h>
#include <TObject.h>


namespace Decoder {
  class THaCrateMap;
}

class MOLLERManager : public TObject {
public:
  MOLLERManager();
  virtual ~MOLLERManager();
  static MOLLERManager *GetInstance();
  static void SetDefaultCrateMapName(const char* name);

  Decoder::THaCrateMap* GetCrateMap();

private:
  Decoder::THaCrateMap *fCrateMap;
  static TString fCrateMapName;
  static MOLLERManager *fManager;

  ClassDef(MOLLERManager,0) ///< Base class for MOLLER Manage
};

#endif//MOLLERMANAGER_H
