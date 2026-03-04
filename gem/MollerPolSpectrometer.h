#ifndef MollerPolSpectrometer_H
#define MollerPolSpectrometer_H

#include "THaSpectrometer.h"

class MollerPolSpectrometer : public THaSpectrometer {

    public:
    MollerPolSpectrometer( const char *name, const char *description );
    virtual ~MollerPolSpectrometer();

    virtual Int_t FindVertices( TClonesArray& tracks );
    virtual Int_t TrackCalc();

    protected:
    ClassDef(MollerPolSpectrometer,0)
};

#endif
