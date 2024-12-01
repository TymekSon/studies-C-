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
        std::cout << "Wy³¹czono silnik benzynowy" << std::endl;
        Silnik = 0;
    }

    void Jedz() override {
        if (Silnik == 1 && Bak == 1) {
            std::cout << "Samochód jedzie na benzynê" << std::endl;
            Bak = 0;
        }
        else {
            std::cout << "Samochód nie jedzie, brak benzyny" << std::endl;
        }
    }

    void Tankuj() override {
        std::cout << "Zatankowano benzynê" << std::endl;
        Bak = 1;
    }
};