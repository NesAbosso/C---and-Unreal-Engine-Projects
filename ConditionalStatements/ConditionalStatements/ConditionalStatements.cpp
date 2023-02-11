// ConditionalStatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int x = 5;

    // if statement
    if (x > 10) {
        std::cout << "x is greater than 10" << std::endl;
    }

    // else statement
    else {
        std::cout << "x is not greater than 10" << std::endl;
    }

    // else if statement
    int y = 15;
    if (y < 10) {
        std::cout << "y is less than 10" << std::endl;
    }
    else if (y > 20) {
        std::cout << "y is greater than 20" << std::endl;
    }
    else {
        std::cout << "y is between 10 and 20" << std::endl;
    }

    // switch statement
    int z = 2;
    switch (z) {
    case 1:
        std::cout << "z is 1" << std::endl;
        break;
    case 2:
        std::cout << "z is 2" << std::endl;
        break;
    default:
        std::cout << "z is not 1 or 2" << std::endl;
    }

    // ternary operator
    int a = 5, b = 10;
    std::cout << (a > b ? "a is greater than b" : "a is not greater than b") << std::endl;

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
