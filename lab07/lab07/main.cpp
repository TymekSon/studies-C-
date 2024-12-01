#include <iostream>
#include "Object.cpp"

using namespace std;

int main() {
	Object object1(4);
	Object object2(7);
	Object object3(5);

	object1.display();
	object2.display();
	object3.display();

	cout << endl;

	object2 = object1;
	object2.display();

	bool isEven = object2 == object3;
	cout << isEven << endl;
	
	object3 = object1 + object2;
	object3.display();

	Object object5 = object1 - object3;
	object5.display();

	Object object6 = object1* object2;
	object6.display();

	Object object7 = 2*object2;
	object7.display();

	cout << object7[3] << endl;
	
}

