#include <iostream>

using namespace std;

int a = 0;
int& refa = a;

void func1(int& a) {
	a++;
}

int main()
{
	cout << a << ", " << refa << endl;

	a = 5;

	cout << a << ", " << refa << endl;

	refa = 10;

	cout << a << ", " << refa << endl;

	cout << "Adresy: a:" << &a << ", refa: " << &refa << endl;

	{
		int b = 1;
		cout << b << ”\n”;
		func1(b);
		cout << b << ”\n”;
	}


	return 0;
}