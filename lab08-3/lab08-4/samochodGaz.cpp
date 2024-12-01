#include "SamochodGaz.h"
#include <iostream>

SamochodGaz::SamochodGaz() : Zbiornik(0) {
    std::cout << "Utworzono Samochod na gaz, Ustawiono zbiornik na 0" << std::endl;
}

SamochodGaz::~SamochodGaz() {
    std::cout << "Usuniêto obiekt SamochodGaz" << std::endl;
}

void SamochodGaz::Uruchom() {
    if (Silnik == 0) {
        std::cout << "Uruchomiono silnik gazowy" << std::endl;
        Silnik = 1;
    }
    else {
        std::cout << "Silnik gazowy jest juz uruchomiony" << std::endl;
    }
}

void SamochodGaz::Wylacz() {
    if (Silnik != 0) {
        std::cout << "Wylaczono silnik gazowy" << std::endl;
    }
    else {
        std::cout << "Silnik juz jest wylaczony" << std::endl;
    }
    Silnik = 0;
}

void SamochodGaz::Jedz() {
    if (Silnik == 1 && Zbiornik == 1) {
        std::cout << "Samochod jedzie na gaz" << std::endl;
        Zbiornik = 0;
    }
    else {
        std::cout << "Samochod nie jedzie, brak gazu" << std::endl;
    }
}

void SamochodGaz::Tankuj() {
    std::cout << "Zatankowano gaz" << std::endl;
    Zbiornik = 1;
}