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
    samochody[1] = new SamochodPrad();
    samochody[2] = new SamochodGaz();

    std::cout << std::endl;

    for (int i = 0; i < 3; ++i) {
        JazdaTestowa(samochody[i]);
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; ++i) {
        delete samochody[i];
    }

    return 0;
}