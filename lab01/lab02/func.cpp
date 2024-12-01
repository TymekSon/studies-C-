#include <iostream>
#include "func.h"
void func() {
	std::cout << "called void func()\n";
}
void func(int a) {
	std::cout << "called void func(int a)\n";
}
void func(char a) {
	std::cout << "called void func(char a)\n";
}
void func(int a, int b) {
	std::cout << "called void func(int a, int b)\n";
}
void func(int a, char b) {
	std::cout << "called void func(int a, char b)\n";
}

