// ClassChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

class Shape {
protected:
	std::string color;

public:
	Shape(std::string c) : color(c) {}
	virtual double getArea() = 0;
};

class Rectangle : public Shape {
private:
	double height, width;

public:
	Rectangle(std::string c, double h, double w) : Shape(c), height(h), width(w) {}

	double getArea() {
		return height * width;
	}
};

class Triangle : public Shape {
private:
	double base, height;

public:
	Triangle(std::string c, double b, double h) : Shape(c), base(b), height(h) {}
	double getArea() {
		return 0.5 * base * height;
	}
};

class Circle : public Shape {
private:
	double radius;

public:
	Circle(std::string c, double r) : Shape(c), radius(r) {}
	double getArea() {
		return 3.14159265358979323846 * radius * radius;
	}
};

int main() {
	Shape* shapes[3];
	shapes[0] = new Rectangle("Red", 10, 20);
	shapes[1] = new Triangle("Green", 15, 25);
	shapes[2] = new Circle("Blue", 5);
	for (int i = 0; i < 3; i++) {
		std::cout << "Area of Shape " << i + 1 << ": " << shapes[i]->getArea() << std::endl;
	}

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
