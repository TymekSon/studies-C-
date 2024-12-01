#include<iostream>
#include"test1.h"
#include"sort.h"

void test1() {
    int* a = new int[10];
    for (int i = 0; i < 10; ++i) {
        a[i] = 10 - i; 
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