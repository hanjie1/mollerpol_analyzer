#ifndef MOLLERSpectrometer_H
#define MOLLERSpectrometer_H

#include "THaSpectrometer.h"

class MOLLERSpectrometer : public THaSpectrometer {

    public:
    MOLLERSpectrometer( const char *name, const char *description );
    virtual ~MOLLERSpectrometer();

    virtual Int_t FindVertices( TClonesArray& tracks );
    virtual Int_t TrackCalc();

    protected:
    ClassDef(MOLLERSpectrometer,0)
};

#endif
