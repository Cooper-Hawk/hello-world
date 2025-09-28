//1.x Question 3

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int i1{};
    std::cin >> i1;
    std::cout << std::endl;

    std::cout << "Enter another integer: ";
    int i2{};
    std::cin >> i2;
    std::cout << std::endl;

    std::cout << i1 << " + " << i2 << " is " << i1 + i2 << std::endl;
    std::cout << i1 << " - " << i2 << " is " << i1 - i2 << std::endl;


    return 0;
}