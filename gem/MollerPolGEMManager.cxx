#include "MollerPolGEMManager.h"
#include "THaCrateMap.h"
#include <ctime>


MollerPolManager* MollerPolManager::fManager = 0;
TString MollerPolManager::fCrateMapName = "cratemap";

///////////////////////////////////////////////////////////////////////////////
// Get an instance of the singleton
MollerPolManager* MollerPolManager::GetInstance()
{
  if(!fManager) {
    fManager = new MollerPolManager();
  }
  return fManager;
}
  
///////////////////////////////////////////////////////////////////////////////
// Get the instance of the global crate map
Decoder::THaCrateMap* MollerPolManager::GetCrateMap()
{
  if(!fCrateMap) {
    fCrateMap = new Decoder::THaCrateMap(fCrateMapName);
    // Initialize to the default run time (which is right now)
    fCrateMap->init(time(0));
  }

  return fCrateMap;
}

///////////////////////////////////////////////////////////////////////////////
void MollerPolManager::SetDefaultCrateMapName(const char* name)
{
  fCrateMapName = name;
}

///////////////////////////////////////////////////////////////////////////////
// Basic constructor
MollerPolManager::MollerPolManager() : fCrateMap(0) {
}

///////////////////////////////////////////////////////////////////////////////
// Destructor
MollerPolManager::~MollerPolManager() {
  if(fCrateMap)
    delete fCrateMap;
};
