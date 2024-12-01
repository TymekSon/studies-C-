#include <iostream>


class Samochod {
protected:
    int Silnik; 
public:
    Samochod() : Silnik(0) {
        std::cout << "Ustawiono silnik na 0" << std::endl;
    }
    virtual ~Samochod() {}
    virtual void Uruchom() = 0;
    virtual void Wylacz() = 0;
    virtual void Jedz() = 0;
    virtual void Tankuj() = 0;
};