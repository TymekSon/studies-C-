#include<iostream>
#include"samochod.cpp"

class SamochodGaz : public Samochod {
private:
    int Zbiornik;

public:
    SamochodGaz() : Zbiornik(0) {
        std::cout << "Ustawiono Zbiornik na 0" << std::endl;
    }

    void Uruchom() override {
        if (Silnik == 0) {
            std::cout << "Uruchomiono silnik gazowy" << std::endl;
            Silnik = 1;
        }
        else {
            std::cout << "Silnik gazowy jest juz uruchomiony" << std::endl;
        }
    }

    void Wylacz() override {
        std::cout << "Wy³¹czono silnik gazowy" << std::endl;
        Silnik = 0;
    }

    void Jedz() override {
        if (Silnik == 1 && Zbiornik == 1) {
            std::cout << "Samochód jedzie na gaz" << std::endl;
            Zbiornik = 0;
        }
        else {
            std::cout << "Samochód nie jedzie, brak gazu" << std::endl;
        }
    }

    void Tankuj() override {
        std::cout << "Zatankowano gaz" << std::endl;
        Zbiornik = 1;
    }
};