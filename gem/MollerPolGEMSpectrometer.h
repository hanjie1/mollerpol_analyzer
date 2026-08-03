#ifndef MollerPolGEMSpectrometer_H
#define MollerPolGEMSpectrometer_H

#include "THaSpectrometer.h"

class MollerPolGEMSpectrometer : public THaSpectrometer {

    public:
    MollerPolGEMSpectrometer( const char *name, const char *description );
    virtual ~MollerPolGEMSpectrometer();

    virtual Int_t FindVertices( TClonesArray& tracks );
    virtual Int_t TrackCalc();

    protected:
    ClassDef(MollerPolGEMSpectrometer,0)
};

#endif
