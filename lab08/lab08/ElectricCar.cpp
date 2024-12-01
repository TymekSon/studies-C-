#include <iostream>
#include "car.cpp"

class SamochodElektryczny : public Samochod {
private:
    int Bak;
public:
    SamochodElektryczny() : Bak(0) {
        std::cout << "Ustawiono Bak na 0" << std::endl;
    }
    void Uruchom() override {
        if (Silnik == 0) {
            std::cout << "Uruchomiono silnik SamochodElektryczny" << std::endl;
            Silnik = 1;
        }
        else {
            std::cout << "Silnik SamochodElektryczny jest ju¿ uruchomiony" << std::endl;
        }
    }
    void Wylacz() override {
        if (Silnik == 1) {
            std::cout << "Wylaczono silnik SamochodElektryczny" << std::endl;
            Silnik = 0;
        }
        else {
            std::cout << "Silnik SamochodElektryczny jest ju¿ wylaczony" << std::endl;
        }
    }
    void Jedz() override {
        if (Silnik == 1 && Bak == 1) {
            std::cout << "Samochód jedzie na prad" << std::endl;
            Bak = 0;
        }
        else {
            std::cout << "Samochód nie jedzie, brak pradu" << std::endl;
        }
    }
    void Tankuj() override {
        if (Bak == 0) {
            std::cout << "Naladowano baterie" << std::endl;
            Bak = 1;
        }
        else {
            std::cout << "Akumulatory SamochodElektryczny sa naladowane" << std::endl;
        }
    }
};