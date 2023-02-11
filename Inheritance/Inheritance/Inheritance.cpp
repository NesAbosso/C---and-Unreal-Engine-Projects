// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

// Base class
class Shape {
protected:
    int width, height;

public:
    void set_width(int w) {
        width = w;
    }

    void set_height(int h) {
        height = h;
    }
};

// Derived class from Shape
class Rectangle : public Shape {
public:
    int get_area() {
        return width * height;
    }
};

// Another derived class from Shape
class Triangle : public Shape {
public:
    int get_area() {
        return (width * height) / 2;
    }
};

// Derived class from Rectangle and Triangle
class MultiShapes : public Rectangle, public Triangle {
public:
    void set_width_height(int w, int h) {
        // Accessing protected members of base classes
        Rectangle::width = w;
        Triangle::height = h;
    }
};

int main() {
    MultiShapes shapes;
    shapes.set_width_height(10, 20);

    cout << "Rectangle area: " << shapes.Rectangle::get_area() << endl;
    cout << "Triangle area: " << shapes.Triangle::get_area() << endl;

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
