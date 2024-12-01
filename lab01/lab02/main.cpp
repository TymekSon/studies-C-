#include <iostream>
#include "func.h"
int main()
{
	std::cout << "call func()\n";
	func();
	std::cout << "call func(1)\n";
	func(1);
	std::cout << "call func('a')\n";
	func('a');
	std::cout << "call func(1.)\n";
	func(char(1.));

	std::cout << "call func('a', 'a')\n";
	func('a', 'a');
	std::cout << "call func(1, 1)\n";
	func(1, 1);
	std::cout << "call func('a', 1)\n";
	func('a', 1);
	std::cout << "call func(1, 'a')\n";
	func(1, 'a');
	std::cout << "call func(1., 1)\n";
	func(1., 1);
	std::cout << "call func(1., 'a')\n";
	func(1., 'a');
	std::cout << "call func(1, 1.)\n";
	func(1, int(1.));
	std::cout << "call func(1, 1.)\n";
	func(1, char(1.));

	std::cout << "Hello World!\n";
	return 0;
}