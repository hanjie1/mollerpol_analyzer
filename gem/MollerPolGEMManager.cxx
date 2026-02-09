#include "MOLLERManager.h"
#include "THaCrateMap.h"
#include <ctime>


MOLLERManager* MOLLERManager::fManager = 0;
TString MOLLERManager::fCrateMapName = "cratemap";

///////////////////////////////////////////////////////////////////////////////
// Get an instance of the singleton
MOLLERManager* MOLLERManager::GetInstance()
{
  if(!fManager) {
    fManager = new MOLLERManager();
  }
  return fManager;
}
  
///////////////////////////////////////////////////////////////////////////////
// Get the instance of the global crate map
Decoder::THaCrateMap* MOLLERManager::GetCrateMap()
{
  if(!fCrateMap) {
    fCrateMap = new Decoder::THaCrateMap(fCrateMapName);
    // Initialize to the default run time (which is right now)
    fCrateMap->init(time(0));
  }

  return fCrateMap;
}

///////////////////////////////////////////////////////////////////////////////
void MOLLERManager::SetDefaultCrateMapName(const char* name)
{
  fCrateMapName = name;
}

///////////////////////////////////////////////////////////////////////////////
// Basic constructor
MOLLERManager::MOLLERManager() : fCrateMap(0) {
}

///////////////////////////////////////////////////////////////////////////////
// Destructor
MOLLERManager::~MOLLERManager() {
  if(fCrateMap)
    delete fCrateMap;
};
