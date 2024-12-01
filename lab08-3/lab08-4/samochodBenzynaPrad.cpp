#include "SamochodBenzynaPrad.h"
#include <iostream>

SamochodBenzynaPrad::SamochodBenzynaPrad() : ZbiornikBenzyna(0), Akumulator(0){
    std::cout << "Utworzono samochod hybrydowy (benzyna + prad)" << std::endl;
}

SamochodBenzynaPrad::~SamochodBenzynaPrad() {
    std::cout << "Usunieto samochod hybrydowy (benzyna + prad)" << std::endl;
}

void SamochodBenzynaPrad::Uruchom() {
    SamochodBenzyna::Uruchom();
    SamochodPrad::Uruchom();
}

void SamochodBenzynaPrad::UruchomElektryczny() {
    SamochodPrad::Uruchom();
}

void SamochodBenzynaPrad::UruchomSpalinowy() {
    SamochodBenzyna::Uruchom();
}

void SamochodBenzynaPrad::Wylacz() {
    SamochodBenzyna::Wylacz();
    SamochodPrad::Wylacz();
}

void SamochodBenzynaPrad::Jedz() {
    if (SamochodBenzyna::Silnik != -1 && SamochodPrad::Silnik != -1) {
        if (Akumulator == 1) {
            std::cout << "Samochod jedzie na prad" << std::endl;
            Akumulator = 0;
        }
        else if (ZbiornikBenzyna == 1) {
            std::cout << "Samochod jedzie na benzyne" << std::endl;
            ZbiornikBenzyna = 0;
        }
        else{
           std::cout << "Samochod nie jedzie, brak paliwa lub pradu" << std::endl;
        }
    }
    else {
        std::cout << "Samochod nie moze jechac, silnik zepsuty" << std::endl;
    }
}



void SamochodBenzynaPrad::Tankuj() {
    SamochodBenzyna::Tankuj();
    SamochodPrad::Tankuj();
    ZbiornikBenzyna = 1;
    Akumulator = 1;
}