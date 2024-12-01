#include <iostream>
#include "car.cpp"

class SamochodBenzyna : public Samochod {
private:
    int Bak; 
public:
    SamochodBenzyna() : Bak(0) {
        std::cout << "Ustawiono Bak na 0" << std::endl;
    }
    void Uruchom() override {
        if (Silnik == 0) {
            std::cout << "Uruchomiono silnik SamochodBenzyna" << std::endl;
            Silnik = 1;
        }
        else {
            std::cout << "Silnik SamochodBenzyna jest ju¿ uruchomiony" << std::endl;
        }
    }
    void Wylacz() override {
        if (Silnik == 1) {
            std::cout << "Wylaczono silnik SamochodBenzyna" << std::endl;
            Silnik = 0;
        }
        else {
            std::cout << "Silnik SamochodBenzyna jest ju¿ wylaczony" << std::endl;
        }
    }
    void Jedz() override {
        if (Silnik == 1 && Bak == 1) {
            std::cout << "Samochod jedzie na benzyne" << std::endl;
            Bak = 0;
        }
        else {
            std::cout << "Samochod nie jedzie, brak benzyny" << std::endl;
        }
    }
    void Tankuj() override {
        if (Bak == 0) {
            std::cout << "Zatankowano benzynê" << std::endl;
            Bak = 1;
        }
        else {
            std::cout << "Bak SamochodBenzyna jest ju¿ pe³ny" << std::endl;
        }
    }
};