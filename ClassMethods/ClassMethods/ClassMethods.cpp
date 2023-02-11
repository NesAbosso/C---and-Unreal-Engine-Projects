// ClassMethods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Rectangle
{
public:
    int length, width;

    // Function declared inside the class definition
    int area()
    {
        return length * width;
    }
};

// Function declared outside the class definition
int perimeter(Rectangle rect)
{
    return 2 * (rect.length + rect.width);
}

int main()
{
    Rectangle rect;
    rect.length = 5;
    rect.width = 3;

    std::cout << "The area of the rectangle is: " << rect.area() << std::endl;
    std::cout << "The perimeter of the rectangle is: " << perimeter(rect) << std::endl;

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
