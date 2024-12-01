#include "Samochod.h"
#include <iostream>

Samochod::Samochod() : Silnik(0) {
    std::cout << "Utworzono Samochod, Ustawiono silnik na 0" << std::endl;
}

Samochod::~Samochod() {
    std::cout << "Usunieto obiekt samochod" << std::endl;
}

void Zepsuj(Samochod& samochod) {
    samochod.Silnik = -1; // Ustawienie stanu silnika na -1 (zepsuty)
}

void Napraw(Samochod& samochod) {
    samochod.Silnik = 0; // Ustawienie stanu silnika na 0 (naprawiony)
}