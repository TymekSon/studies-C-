#include <iostream>
#include "car.cpp"

class SamochodLPG : public Samochod {
private:
    int Bak;
public:
    SamochodLPG() : Bak(0) {
        std::cout << "Ustawiono Bak na 0" << std::endl;
    }
    void Uruchom() override {
        if (Silnik == 0) {
            std::cout << "Uruchomiono silnik SamochodLPG" << std::endl;
            Silnik = 1;
        }
        else {
            std::cout << "Silnik SamochodLPG jest ju¿ uruchomiony" << std::endl;
        }
    }
    void Wylacz() override {
        if (Silnik == 1) {
            std::cout << "Wylaczono silnik SamochodLPG" << std::endl;
            Silnik = 0;
        }
        else {
            std::cout << "Silnik SamochodLPG jest ju¿ wylaczony" << std::endl;
        }
    }
    void Jedz() override {
        if (Silnik == 1 && Bak == 1) {
            std::cout << "Samochod jedzie na LPG" << std::endl;
            Bak = 0;
        }
        else {
            std::cout << "Samochod nie jedzie, brak LPG" << std::endl;
        }
    }
    void Tankuj() override {
        if (Bak == 0) {
            std::cout << "Zatankowano LPG" << std::endl;
            Bak = 1;
        }
        else {
            std::cout << "Bak SamochodLPG jest ju¿ pe³ny" << std::endl;
        }
    }
};