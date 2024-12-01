#include <iostream>
#include "samochod.h"
#include "SamochodBenzyna.h"
#include "SamochodPrad.h"
#include "SamochodGaz.h"
#include "samochodBenzynaGaz.h"
#include "samochodBenzynaPrad.h"

using namespace std;

void JazdaTestowa(Samochod* samochod);

int main() {
    Samochod* samochody[2];

    samochody[0] = (SamochodBenzyna*) new SamochodBenzynaPrad();
    samochody[1] = new SamochodBenzynaGaz();

    std::cout << std::endl;

    for (int i = 0; i < 2; ++i) {
        JazdaTestowa(samochody[i]);
        std::cout << std::endl;
    }

    for (int i = 0; i < 2; ++i) {
        delete samochody[i];
    }

    return 0;
}

void JazdaTestowa(Samochod* samochod) {
    Zepsuj(*samochod);
    samochod->Jedz();
    Napraw(*samochod);
    samochod->Jedz();
    samochod->Uruchom();
    samochod->Uruchom();
    samochod->Jedz();
    samochod->Tankuj();
    samochod->Tankuj();
    samochod->Jedz();
    samochod->Jedz();
    samochod->Wylacz();
    samochod->Wylacz();
}
