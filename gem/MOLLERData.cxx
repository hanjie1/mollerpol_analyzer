#include "MOLLERData.h"
#include "TMath.h"
#include <iostream>
#define MOLLER_ADC_MODE_SINGLE 0 //< Simple ADC with only integral
#define MOLLER_ADC_MODE_MULTI  1 //< FADC 250 mode 7

namespace MOLLERData {

  /////////////////////////////////////////////////////////////////////////////
  // ADC data functions
  ADC::ADC(Double_t ped, Double_t gain, Double_t tcal) :
      fHasData(false), fMode(MOLLER_ADC_MODE_SINGLE)
  {
    SetPed(ped);
    SetGain(gain);
    SetTimeCal(tcal);
  }

  void ADC::Process(Double_t val)
  {
    SingleData zero = { 0.0, 0.0 };
    SingleData integral = { val, (val-fADC.ped)*fADC.cal };
    fADC.hits.push_back({integral,zero,zero});
    fHasData = true;
    fMode = MOLLER_ADC_MODE_SINGLE; //< Mode gets set to simple if this function is called
  }

  void ADC::Process(Double_t integral, Double_t time, Double_t amp, Double_t ped) {
    //fADC.push_back({ped,fGlobalCal,val,val-ped,(val-ped)*fGlobalCal});
    // convert to pC, assume tcal is in ns, and 50ohm resistance
    Double_t pC_Conv = fADC.tcal/50.;
    Double_t PedVal = ped*GetChanTomV();
    Double_t TimeVal= time*fADC.tcal/64. + fADC.timeoffset;
    Double_t IntRaw=  integral*GetChanTomV()*pC_Conv;
    Double_t IntVal=  (IntRaw-PedVal*(GetNSA()+GetNSB()+1)*pC_Conv)*GetGain();
    Double_t AmpRaw=  amp*GetChanTomV();
    Double_t AmpVal=  (AmpRaw-PedVal)*GetAmpCal();
    SingleData t_integral = { IntRaw, IntVal   };
    SingleData t_time     = { time, TimeVal };
    SingleData t_amp     = { AmpRaw, AmpVal };
    fADC.hits.push_back({t_integral,t_time,t_amp } );
    SetPed(PedVal);
    fHasData = true;
    fMode = MOLLER_ADC_MODE_MULTI; //< Mode gets set to multi if this function is called
  }

  void ADC::Clear()
  {
    fADC.good_hit = 0;
    fADC.hits.clear();
    fHasData = false;
  }

  /////////////////////////////////////////////////////////////////////////////
  // Waveform data functions
  Waveform::Waveform(Double_t ped, Double_t gain, Double_t ChanTomV,Double_t GoodTimeCut, Double_t tcal) :
    fHasData(false)
  {
    SetPed(ped);
    SetGain(gain);
    SetChanTomV(ChanTomV);
    SetTimeCal(tcal);
    SetGoodTimeCut(GoodTimeCut);
  }

  void Waveform::Process(std::vector<Double_t> &vals)
  {
    //printf("vals size %d, samples raw size %d\n", vals.size(), fSamples.samples_raw.size());
    if( vals.size() != fSamples.samples_raw.size()) {
      // Resize our data vector
      fSamples.samples_raw.resize(vals.size());
      fSamples.samples.resize(vals.size());
      Clear();
    }
    //
    for(size_t i = 0; i < vals.size(); i++ ) {
      fSamples.samples_raw[i] = vals[i]*fSamples.ChanTomV;
    }
    // Determining pedestal in first and last four samples. Will choose the
    // minimum of the two.
    Double_t pedsum_fsamps=0, pedsum_lsamps=0;
    Int_t NPedsum=GetNPedBin(), totTimeSamps=vals.size();
    
    NPedsum= TMath::Min(NPedsum,int(vals.size()));
    // std::cout << " Npedsum = " << NPedsum << " " << GetNPedBin() << std::endl;
    
    for(Int_t i = 0; i < NPedsum ; i++ ) {
      // Computing pedestal using first N samples
      pedsum_fsamps += fSamples.samples_raw[i];
      // Computing pedestal using last N samples
      pedsum_lsamps += fSamples.samples_raw[(totTimeSamps-1)-i];
    }
   
    SetPed( TMath::Min(pedsum_fsamps,pedsum_lsamps)/NPedsum );
    for(size_t i = 0; i < vals.size(); i++ ) {
      fSamples.samples[i] = (fSamples.samples_raw[i]-fSamples.ped)*fSamples.cal;
    }
    
    // Try and fixd sample threshold crossing above the pedestal
    Double_t ThresVal=GetThres(); // mV
    UInt_t ThresCrossBin=TMath::Max(NPedsum-1,0);
    //    std::cout << " ped = " << fSamples.ped << " thres = " << ThresVal << std::endl ;
    while ( ThresCrossBin < vals.size() && fSamples.samples_raw[ThresCrossBin] < fSamples.ped+ThresVal ) {
        ThresCrossBin++;
    }
     //
    // if threshold crossing found
    UInt_t NSB = GetNSB();
    UInt_t NSA = GetNSA();
    UInt_t FixedThresCrossBin=GetFixThresBin();
    Double_t FineTime = 0;
    Double_t max  = 0;
    Double_t sum = 0;
    Double_t sped = 0;
    
    Bool_t PeakFound= kFALSE;
      UInt_t PeakBin= 0;
      UInt_t IntMinBin= 0;
      UInt_t IntMaxBin= vals.size();
    if (ThresCrossBin < vals.size()) {
      IntMinBin= TMath::Max(ThresCrossBin-NSB,IntMinBin);
      IntMaxBin= TMath::Min(ThresCrossBin+NSA-1,IntMaxBin);
    } else {
      IntMinBin = TMath::Max(FixedThresCrossBin-NSB,IntMinBin);
      IntMaxBin = TMath::Min(FixedThresCrossBin+NSA-1,IntMaxBin);
    }
    // convert to pC, assume tcal is in ns, and 50ohm resistance
    Double_t pC_Conv = fSamples.tcal/50.;
    
    for(size_t i =IntMinBin ; i <IntMaxBin ; i++ ) {
         sped+=fSamples.ped*pC_Conv;
         sum+=fSamples.samples_raw[i]*pC_Conv;
         if ( i >= ThresCrossBin && !PeakFound) {
	   if (fSamples.samples_raw[i] > max) {
	     max = fSamples.samples_raw[i];
	   } else {
             PeakFound= kTRUE;
	     PeakBin = i-1;
	   }
	 }
    }
    //
    //    std::cout << " Int = " << IntMinBin << " " << IntMaxBin<< " ThresCrossBin =   " << ThresCrossBin << " peak-found " << PeakFound << std::endl ;
    //
    Double_t VMid = (max+fSamples.ped)/2.;
    if (PeakFound) {
      for(size_t i =IntMinBin ; i <PeakBin+1 ; i++ ) {
	if (VMid >= fSamples.samples_raw[i]  && VMid < fSamples.samples_raw[i+1]) {
	FineTime = i+(VMid-fSamples.samples_raw[i])/(fSamples.samples_raw[i+1]-fSamples.samples_raw[i]);
	}
      }
    }
    
    /*
    if (ThresCrossBin==vals.size()) {
      std::cout << " Threshold = " << fThresVal << " ped = " << fSamples.ped << " element = " << ThresCrossBin << " " << " Vmid = " << VMid << "  sum = " << sum << " max = " << max << " time = " << FineTime << " tcal = " << fSamples.tcal <<  std::endl;
    }
    */
    fSamples.pulse.integral.raw = sum;
    fSamples.pulse.integral.val = (sum-sped)*fSamples.cal;
    fSamples.pulse.time.raw = FineTime;
    fSamples.pulse.time.val = (FineTime)*fSamples.tcal + fSamples.timeoffset;
    fSamples.pulse.amplitude.raw = max;
    fSamples.pulse.amplitude.val = (max-fSamples.ped)*fSamples.acal;
    if (max==0) fSamples.pulse.amplitude.val=max;
    //
    fHasData = (vals.size() > 0);
  }

  void Waveform::Clear()
  {
    for(size_t i = 0; i < fSamples.samples.size(); i++) {
      fSamples.samples_raw[i] = fSamples.samples[i] = 0;
    }
    fHasData = false;
  }

}; // end MOLLERData
