#include<iostream>

using namespace std;

int a = 0;
int & b = a;

void func(int & b){
	b++;
	cout << "wywolano funkcje" << endl;
}

int main() {
	cout << a << endl;
	cout << b << endl;

	cout << &a << endl;
	cout << &b << endl;
	
	func(b);

	cout << a << endl;
	cout << b << endl;

	cout << &a << endl;
	cout << &b << endl;
	return 0;
}