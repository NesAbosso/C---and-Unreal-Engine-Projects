// Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class MyClass {
public:
	int num;
	std::string name;
};

int main() {
	MyClass obj1, obj2;

	obj1.num = 5;
	obj1.name = "object1";

	obj2.num = 10;
	obj2.name = "object2";

	std::cout << "Num of obj1: " << obj1.num << std::endl;
	std::cout << "Name of obj1: " << obj1.name << std::endl;

	std::cout << "Num of obj2: " << obj2.num << std::endl;
	std::cout << "Name of obj2: " << obj2.name << std::endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
