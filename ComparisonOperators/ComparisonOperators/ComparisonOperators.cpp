// ComparisonOperators.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a = 10;
    int b = 5;

    bool is_a_greater_than_b = a > b;
    std::cout << "Is a greater than b? " << is_a_greater_than_b << std::endl;

    bool is_a_equal_to_b = a == b;
    std::cout << "Is a equal to b? " << is_a_equal_to_b << std::endl;

    bool is_a_not_equal_to_b = a != b;
    std::cout << "Is a not equal to b? " << is_a_not_equal_to_b << std::endl;

    bool is_a_less_than_or_equal_to_b = a <= b;
    std::cout << "Is a less than or equal to b? " << is_a_less_than_or_equal_to_b << std::endl;

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
