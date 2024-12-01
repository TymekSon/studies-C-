#include<iostream>
#include"samochod.cpp"

class SamochodBenzyna : public Samochod {
private:
    int Bak;

public:
    SamochodBenzyna() : Bak(0) {
        std::cout << "Ustawiono Bak na 0" << std::endl;
    }

    void Uruchom() override {
        if (Silnik == 0) {
            std::cout << "Uruchomiono silnik benzynowy" << std::endl;
            Silnik = 1;
        }
        else {
            std::cout << "Silnik benzynowy jest juz uruchomiony" << std::endl;
        }
    }

    void Wylacz() override {
        std::cout << "Wy��czono silnik benzynowy" << std::endl;
        Silnik = 0;
    }

    void Jedz() override {
        if (Silnik == 1 && Bak == 1) {
            std::cout << "Samoch�d jedzie na benzyn�" << std::endl;
            Bak = 0;
        }
        else {
            std::cout << "Samoch�d nie jedzie, brak benzyny" << std::endl;
        }
    }

    void Tankuj() override {
        std::cout << "Zatankowano benzyn�" << std::endl;
        Bak = 1;
    }
};