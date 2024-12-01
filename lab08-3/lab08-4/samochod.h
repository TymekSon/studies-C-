#ifndef SAMOCHOD_H
#define SAMOCHOD_H

class Samochod {
protected:
    int Silnik;

public:
    Samochod();
    virtual ~Samochod();

    virtual void Uruchom() = 0;
    virtual void Wylacz() = 0;
    virtual void Jedz() = 0;
    virtual void Tankuj() = 0;

    friend void Zepsuj(Samochod&);
    friend void Napraw(Samochod&);
};

#endif