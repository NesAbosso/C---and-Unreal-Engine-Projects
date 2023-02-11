// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class Cat
{
public:
    std::string breed;
    std::string color;
    int height;
    int weight;

    void sit()
    {
        std::cout << "The cat is now sitting." << std::endl;
    }

    void laydown()
    {
        std::cout << "The cat is now lying down." << std::endl;
    }

    void jump()
    {
        std::cout << "The cat has jumped!" << std::endl;
    }
};

int main()
{
    Cat myCat;
    myCat.breed = "Tabby";
    myCat.color = "White";
    myCat.height = 1;
    myCat.weight = 10;

    std::cout << "Breed: " << myCat.breed << std::endl;
    std::cout << "Color: " << myCat.color << std::endl;
    std::cout << "Height: " << myCat.height << std::endl;
    std::cout << "Weight: " << myCat.weight << std::endl;

    myCat.jump();
    myCat.sit();
    myCat.laydown();

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
