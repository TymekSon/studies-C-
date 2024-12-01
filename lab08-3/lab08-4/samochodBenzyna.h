#ifndef SAMOCHOD_BENZYNA_H
#define SAMOCHOD_BENZYNA_H

#include "Samochod.h"

class SamochodBenzyna : public virtual Samochod {
private:
    int Bak;

public:
    SamochodBenzyna();
    virtual ~SamochodBenzyna();
    void Uruchom() override;
    void Wylacz() override;
    void Jedz() override;
    void Tankuj() override;
};

#endif