#include<iostream>
#include"samochod.cpp"

class SamochodPrad : public Samochod {
private:
    int Akumulator;

public:
    SamochodPrad() : Akumulator(0) {
        std::cout << "Ustawiono Akumulator na 0" << std::endl;
    }

    void Uruchom() override {
        if (Silnik == 0) {
            std::cout << "Uruchomiono silnik elektryczny" << std::endl;
            Silnik = 1;
        }
        else {
            std::cout << "Silnik elektryczny jest juz uruchomiony" << std::endl;
        }
    }

    void Wylacz() override {
        std::cout << "Wy³¹czono silnik elektryczny" << std::endl;
        Silnik = 0;
    }

    void Jedz() override {
        if (Silnik == 1 && Akumulator == 1) {
            std::cout << "Samochód jedzie na pr¹d" << std::endl;
            Akumulator = 0;
        }
        else {
            std::cout << "Samochód nie jedzie, brak pr¹du" << std::endl;
        }
    }

    void Tankuj() override {
        std::cout << "Na³adowano akumulator" << std::endl;
        Akumulator = 1;
    }
};