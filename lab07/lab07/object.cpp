#include <iostream>
#include <string>

using namespace std;

class Object {
	int value;
	Object* object;
public:
	//constructor
	Object(int value) {
		this->value = value;
	}
	//destructor
	~Object() {};
	//Display
	void display() {
		cout << "Value of " << object << " :" << value << endl;
	}
	//bool operator
	bool operator==(const Object& object) {
		if (this->value == object.value) {
			return true;
		}
		else {
			return false;
		}
	}
	//assignment operator
	Object operator=(const Object& object) {
		return Object(this->value = object.value);
	}
	//addition operator
	Object operator+(const Object& object) {
		return Object(this->value + object.value);
	}
	//substraction operator
	Object operator-(const Object& object) {
		return Object(this->value - object.value);
	}
	//multiplication object x object operator
	Object operator*(const Object& object) {
		return Object(this->value * object.value);
	}
	//multiplication object x number operator
	friend Object operator*(const int number, const Object& object) {
		return Object(object.value * number);
	}
	//output operator
	friend ostream& operator <<(ostream& s, const Object& object)
	{
		return s << "Displaying object: " << object.value;
	}
	//index operator
	Object operator[](int index) {
		return value; // przy tablicy: return value[index]
	}
	// tablica 2d:
	//int*operator[](int index){
	//	return value[index]
	//}
	// tablica:
	//int&operator[](int index){
	//	return value[index]
	//}

};