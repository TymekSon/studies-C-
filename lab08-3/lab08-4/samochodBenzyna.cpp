#include "SamochodBenzyna.h"
#include <iostream>

SamochodBenzyna::SamochodBenzyna() : Bak(0) {
    std::cout << "Utworzono Samochod na benzyne, Ustawiono Bak na 0" << std::endl;
}

SamochodBenzyna::~SamochodBenzyna() {
    std::cout << "Usuniêto obiekt SamochodBenzyna" << std::endl;
}

void SamochodBenzyna::Uruchom() {
    if (Silnik == 0) {
        std::cout << "Uruchomiono silnik benzynowy" << std::endl;
        Silnik = 1;
    }
    else {
        std::cout << "Silnik benzynowy jest juz uruchomiony" << std::endl;
    }
}

void SamochodBenzyna::Wylacz() {
    if (Silnik != 0) {
        std::cout << "Wylaczono silnik benzynowy" << std::endl;
    }
    else {
        std::cout << "Silnik juz jest wylaczony" << std::endl;
    }
    Silnik = 0;
}

void SamochodBenzyna::Jedz() {
    if (Silnik == 1 && Bak == 1) {
        std::cout << "Samochod jedzie na benzyne" << std::endl;
        Bak = 0;
    }
    else {
        std::cout << "Samochod nie jedzie, brak benzyny" << std::endl;
    }
}

void SamochodBenzyna::Tankuj() {
    if (Bak == 1) {
        std::cout << "Bak jest juz zatankowany" << std::endl;
    }
    else {
        std::cout << "zatankowano bak" << std::endl;
        Bak = 1;
    }
}


