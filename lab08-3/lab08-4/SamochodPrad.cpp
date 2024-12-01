#include "SamochodPrad.h"
#include <iostream>

SamochodPrad::SamochodPrad() : Akumulator(0) {
    std::cout << "Utworzono Samochod na prad, Ustawiono akumulator na 0" << std::endl;
}

SamochodPrad::~SamochodPrad() {
    std::cout << "Usuniêto obiekt SamochodPrad" << std::endl;
}

void SamochodPrad::Uruchom() {
    if (Silnik == 0) {
        std::cout << "Uruchomiono silnik elektryczny" << std::endl;
        Silnik = 1;
    }
    else {
        std::cout << "Silnik elektryczny jest juz uruchomiony" << std::endl;
    }
}

void SamochodPrad::Wylacz() {
    if (Silnik != 0) {
        std::cout << "Wylaczono silnik elektryczny" << std::endl;
    }
    else {
        std::cout << "Silnik juz jest wylaczony" << std::endl;
    }
    Silnik = 0;
}

void SamochodPrad::Jedz() {
    if (Silnik == 1 && Akumulator == 1) {
        std::cout << "Samochod jedzie na prad" << std::endl;
        Akumulator = 0;
    }
    else {
        std::cout << "Samochod nie jedzie, brak pradu" << std::endl;
    }
}

void SamochodPrad::Tankuj() {
    if (Akumulator == 1) {
        std::cout << "Akumulator jest juz naladowany" << std::endl;
    }
    else {
        std::cout << "Naladowano akumulator" << std::endl;
        Akumulator = 1;
    }
}

