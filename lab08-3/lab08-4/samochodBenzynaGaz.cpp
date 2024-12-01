#include<iostream>
#include "SamochodBenzynaGaz.h"

SamochodBenzynaGaz::SamochodBenzynaGaz() {
    std::cout << "Utworzono samochod hybrydowy (benzyna + gaz)" << std::endl;
}

SamochodBenzynaGaz::~SamochodBenzynaGaz() {
    std::cout << "Usunieto samochod hybrydowy (benzyna + gaz)" << std::endl;
}

void SamochodBenzynaGaz::Uruchom() {
    std::cout << "Uruchomiono silnik hybrydowy (benzyna + gaz)" << std::endl;
    SamochodBenzyna::Uruchom();
    SamochodGaz::Uruchom();
}

void SamochodBenzynaGaz::Wylacz() {
    std::cout << "Wylaczono silnik hybrydowy (benzyna + gaz)" << std::endl;
    SamochodBenzyna::Wylacz();
    SamochodGaz::Wylacz();
}

void SamochodBenzynaGaz::Jedz() {
    std::cout << "Samochod jedzie na (benzyna + gaz)" << std::endl;
}

void SamochodBenzynaGaz::Tankuj() {
    std::cout << "Zatankowano zarówno benzyne, jak i gaz" << std::endl;
    SamochodBenzyna::Tankuj();
    SamochodGaz::Tankuj();
}