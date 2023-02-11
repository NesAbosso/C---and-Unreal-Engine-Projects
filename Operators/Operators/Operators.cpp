// Operators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a = 10;
    int b = 5;

    int sum = a + b;
    std::cout << "The sum of " << a << " and " << b << " is: " << sum << std::endl;

    int difference = a - b;
    std::cout << "The difference of " << a << " and " << b << " is: " << difference << std::endl;

    int product = a * b;
    std::cout << "The product of " << a << " and " << b << " is: " << product << std::endl;

    int quotient = a / b;
    std::cout << "The quotient of " << a << " and " << b << " is: " << quotient << std::endl;

    int c = a++;
    std::cout << "The value of c is: " << c << std::endl;
    std::cout << "The value of a is: " << a << std::endl;

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
