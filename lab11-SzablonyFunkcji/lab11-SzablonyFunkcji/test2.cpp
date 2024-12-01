#include<iostream>
#include"test2.h"
#include"sort.h"

void test2() {
    char* a = new char[10];
    for (int i = 0; i < 10; ++i) {
        a[i] = 'm' - i; 
    }

    std::cout << "Tablica przed sortowaniem:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    sortuj(a, 10);

    std::cout << "Tablica po sortowaniu:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    delete[] a;
}