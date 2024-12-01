#ifndef SAMOCHOD_GAZ_H
#define SAMOCHOD_GAZ_H

#include "Samochod.h"

class SamochodGaz : public virtual Samochod {
private:
    int Zbiornik;

public:
    SamochodGaz();
    ~SamochodGaz();
    void Uruchom() override;
    void Wylacz() override;
    void Jedz() override;
    void Tankuj() override;
};

#endif#pragma once
