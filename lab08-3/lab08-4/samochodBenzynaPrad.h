#ifndef SAMOCHOD_BENZYNA_PRAD_H
#define SAMOCHOD_BENZYNA_PRAD_H

#include "SamochodBenzyna.h"
#include "SamochodPrad.h"

class SamochodBenzynaPrad : public virtual SamochodBenzyna, public virtual SamochodPrad {
private:
    int ZbiornikBenzyna;
    int Akumulator;

public:
    SamochodBenzynaPrad();
    virtual ~SamochodBenzynaPrad();

    void Uruchom() override;
    void Wylacz() override;
    void Jedz() override;
    void Tankuj() override;

    void UruchomElektryczny();
    void UruchomSpalinowy();

    friend void ZepsujSilnikBenzynowy(SamochodBenzyna&);
    friend void ZepsujSilnikElektryczny(SamochodPrad&);
};

#endif 