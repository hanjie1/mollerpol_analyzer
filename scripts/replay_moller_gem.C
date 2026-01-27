/* Replay script for GEM analysis data */
#include "TSystem.h"
#include "TList.h"
#include "THaRun.h"
#include "THaEvent.h"
#include "THaAnalyzer.h"
#include "THaApparatus.h"
#include "TString.h"

void replay_moller_gem( int runnum=1839, int firstsegment=0, int maxsegments=1, long firstevent=0, long nevents=1000 ){
    MOLLERSpectrometer *moller = new MOLLERSpectrometer("moller", "Generic apparatus");
    MOLLERGEMSpectrometerTracker *uvagem = new MOLLERGEMSpectrometerTracker("uvagem", "5-layer cosmic test stand");
    
    moller->AddDetector(uvagem);

    THaAnalyzer* analyzer = new THaAnalyzer;
    
    gHaApps->Add(moller);
  
    THaEvent* event = new THaEvent;
    
    TString prefix = gSystem->Getenv("DATA_DIR");
    
    bool segmentexists = true;
    int segment=firstsegment; 
  
    int lastsegment=firstsegment;
    
    TClonesArray *filelist = new TClonesArray("THaRun",10);
  
    TDatime now = TDatime();
    
    int segcounter=0;
    while( segcounter < maxsegments && segment - firstsegment < maxsegments ){

    TString codafilename;
    //codafilename.Form( "%s/ssp_gem_apv_test_%d.evio.%d", prefix.Data(), runnum, segment );
    codafilename.Form( "%s/moller_ssp_%d.evio.%d", prefix.Data(), runnum, segment );
   // codafilename.Form( "%s/moller_ssp_%d.evio.%d", prefix.Data(), runnum, segment+1 );
 

    segmentexists = true;
  
    if( gSystem->AccessPathName( codafilename.Data() ) ){
      segmentexists = false;
    } else if( segcounter == 0 ){
      new( (*filelist)[segcounter] ) THaRun( codafilename.Data() );
      cout << "Added segment " << segcounter << ", CODA file name = " << codafilename << endl;

      
      ( (THaRun*) (*filelist)[segcounter] )->SetDate(now);
      ( (THaRun*) (*filelist)[segcounter] )->SetNumber( runnum );
      //( (THaRun*) (*filelist)[segcounter] )->Init();
      
    } else {
      THaRun *rtemp = ( (THaRun*) (*filelist)[segcounter-1] ); //make otherwise identical copy of previous run in all respects except coda file name:
      new( (*filelist)[segcounter] ) THaRun( *rtemp );
      ( (THaRun*) (*filelist)[segcounter] )->SetFilename( codafilename.Data() );
      ( (THaRun*) (*filelist)[segcounter] )->SetNumber( runnum );
      ( (THaRun*) (*filelist)[segcounter] )->SetDate(now);
      cout << "Added segment " << segcounter << ", CODA file name = " << codafilename << endl;
    }
    if( segmentexists ){
      segcounter++;
      lastsegment = segment;
    }
    segment++;
  }

  cout << "n segments to analyze = " << segcounter << endl;
  
  prefix = gSystem->Getenv("OUT_DIR");
  firstsegment = 0;
  lastsegment = 1;
  TString outfilename;
  outfilename.Form( "%s/moller_uvagem_replayed_%d_aligned_seg%d_%d_1_seg_4Sigma_Jan13.root", prefix.Data(), runnum,firstsegment,lastsegment);
  //outfilename.Form( "/lustre24/expphy/volatile/halla/moller12gev/chandan/Rootfiles/moller1_uvagem_replayed_%d_seg%d_%d.root", runnum,firstsegment, lastsegment );

  analyzer->SetVerbosity(2);
  analyzer->SetMarkInterval(100);

  analyzer->EnableBenchmarks();
  
  // Define the analysis parameters
  analyzer->SetEvent( event );
  analyzer->SetOutFile( outfilename.Data() );
  // File to record cuts accounting information
  analyzer->SetSummaryFile(Form("summary_example_%d.log",runnum)); // optional

  prefix = gSystem->Getenv("MOLLER_REPLAY");
  prefix += "/replay/";

  TString odef_filename = "replay_moller_uvagem.odef";
  
  odef_filename.Prepend( prefix );

  
  analyzer->SetOdefFile( odef_filename );
  
  //analyzer->SetCompressionLevel(0); // turn off compression

  filelist->Compress();

  for( int iseg=0; iseg<filelist->GetEntries(); iseg++ ){
    THaRun *run = ( (THaRun*) (*filelist)[iseg] );
    if( nevents > 0 ) run->SetLastEvent(nevents); //not sure if this will work as we want it to for multiple file segments chained together

    run->SetFirstEvent( firstevent );
    
    run->SetDataRequired(0);
    
    analyzer->Process(run);     // start the actual analysis
  }
}
