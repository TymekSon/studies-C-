#ifndef SAMOCHOD_BENZYNA_GAZ_H
#define SAMOCHOD_BENZYNA_GAZ_H

#include "SamochodBenzyna.h"
#include "SamochodGaz.h"

class SamochodBenzynaGaz : public SamochodBenzyna, public SamochodGaz {
public:
    SamochodBenzynaGaz();
    virtual ~SamochodBenzynaGaz();

    void Uruchom() override;
    void Wylacz() override;
    void Jedz() override;
    void Tankuj() override;
};

#endif 