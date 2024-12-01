﻿#include <iostream>
#include "lpgCar.cpp";
#include "petrolCar.cpp";
#include "ElectricCar.cpp";

void JazdaTestowa(Samochod* samochod) {
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

int main() {
    Samochod* samochody[3];

    samochody[0] = new SamochodBenzyna();
    samochody[1] = new SamochodElektryczny();
    samochody[2] = new SamochodLPG();

    for (int i = 0; i < 3; ++i) {
        JazdaTestowa(samochody[i]);
    }

    for (int i = 0; i < 3; ++i) {
        delete samochody[i];
    }

    return 0;
}