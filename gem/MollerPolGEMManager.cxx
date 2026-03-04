#include "MollerPolGEMManager.h"
#include "THaCrateMap.h"
#include <ctime>


MollerPolGEMManager* MollerPolGEMManager::fManager = 0;
TString MollerPolGEMManager::fCrateMapName = "cratemap";

///////////////////////////////////////////////////////////////////////////////
// Get an instance of the singleton
MollerPolGEMManager* MollerPolGEMManager::GetInstance()
{
  if(!fManager) {
    fManager = new MollerPolGEMManager();
  }
  return fManager;
}
  
///////////////////////////////////////////////////////////////////////////////
// Get the instance of the global crate map
Decoder::THaCrateMap* MollerPolGEMManager::GetCrateMap()
{
  if(!fCrateMap) {
    fCrateMap = new Decoder::THaCrateMap(fCrateMapName);
    // Initialize to the default run time (which is right now)
    fCrateMap->init(time(0));
  }

  return fCrateMap;
}

///////////////////////////////////////////////////////////////////////////////
void MollerPolGEMManager::SetDefaultCrateMapName(const char* name)
{
  fCrateMapName = name;
}

///////////////////////////////////////////////////////////////////////////////
// Basic constructor
MollerPolGEMManager::MollerPolGEMManager() : fCrateMap(0) {
}

///////////////////////////////////////////////////////////////////////////////
// Destructor
MollerPolGEMManager::~MollerPolGEMManager() {
  if(fCrateMap)
    delete fCrateMap;
};
