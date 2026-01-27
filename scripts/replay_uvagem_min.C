#include "TSystem.h"
#include "TDatime.h"
#include "THaGlobals.h"
#include "THaAnalyzer.h"
#include "THaEvent.h"
#include "THaRun.h"

// Your GEM tracker headers (macro is in scripts/, headers are in ../gem/)
#include "../gem/MOLLERSpectrometer.h"
#include "../gem/MOLLERGEMSpectrometerTracker.h"

// ---- IMPORTANT: make Podd/HallA symbols visible to cling JIT ----
// Use absolute paths (most robust on ifarm):
R__LOAD_LIBRARY(/work/halla/moller12gev/asar/Analyzer/local/analyzer-1.7.18/lib64/libPodd.so)
R__LOAD_LIBRARY(/work/halla/moller12gev/asar/Analyzer/local/analyzer-1.7.18/lib64/libHallA.so)

// Load your plugin library that contains the gem classes:
R__LOAD_LIBRARY(../build/libMollerPol.so)

void replay_uvagem_min(const char* fname, int runnum=1857, long firstevent=0,
                       long nevents=200, const char* out="uvagem_test.root")
{
  // Point DB_DIR to the DB folder that contains db_moller.uvagem.dat etc
  // (change if you prefer a different date folder)
  gSystem->Setenv("DB_DIR", "../DB/20230226");

  // Build apparatus + detector
  auto* moller = new MOLLERSpectrometer("moller", "Generic apparatus");
  auto* uvagem  = new MOLLERGEMSpectrometerTracker("uvagem", "cosmic stand");
  moller->AddDetector(uvagem);
  gHaApps->Add(moller);

  // Analyzer setup
  auto* analyzer = new THaAnalyzer;
  analyzer->SetVerbosity(2);
  analyzer->SetMarkInterval(100);
  analyzer->SetOdefFile("replay_moller_uvagem.odef");   // <-- important
  analyzer->SetSummaryFile(Form("summary_uvagem_%d.log", runnum)); // optional

  auto* event = new THaEvent;
  analyzer->SetEvent(event);

  analyzer->SetOutFile(out);

  // Run setup
  THaRun run(fname);
  run.SetNumber(runnum);
  run.SetDate(TDatime());
  run.SetFirstEvent(firstevent);
  if(nevents > 0) run.SetLastEvent(firstevent + nevents - 1);

  // Cosmic / SSP files often don’t have prescale/runparam events:
  run.SetDataRequired(0);

  analyzer->Process(run);
}

