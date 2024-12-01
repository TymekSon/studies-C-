#ifndef SAMOCHOD_PRAD_H
#define SAMOCHOD_PRAD_H

#include "Samochod.h"

class SamochodPrad : public Samochod {
private:
    int Akumulator;

public:
    SamochodPrad();
    ~SamochodPrad();
    void Uruchom() override;
    void Wylacz() override;
    void Jedz() override;
    void Tankuj() override;
};

#endif
