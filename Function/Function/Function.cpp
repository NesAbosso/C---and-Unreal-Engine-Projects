// Function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Function with no argument
void sayHello() {
	cout << "Hello!" << endl;
}

// Function with multiple parameters
int addNumbers(int a, int b) {
	return a + b;
}

// Function with a reference parameter
void doubleValue(int& x) {
	x = x * 2;
}

// Overloaded function
double addNumbers(double a, double b) {
	return a + b;
}

int main() {
	// Call function without an argument
	sayHello();

	// Call function with multiple parameters
	int result = addNumbers(3, 5);
	cout << "The result of adding 3 and 5 is: " << result << endl;

	// Utilize return keyword inside a function
	int x = 10;
	doubleValue(x);
	cout << "The doubled value of x is: " << x << endl;

	// Call overloaded function
	double result2 = addNumbers(3.5, 5.5);
	cout << "The result of adding 3.5 and 5.5 is: " << result2 << endl;

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
