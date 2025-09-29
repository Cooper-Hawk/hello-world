#include <iostream>

int doubleNumber(int x);


int main()
{
    std::cout << "Please enter an integer to be doubled: ";
    int x{};
    std::cin >> x;

    std::cout << "The number you entered doubled is: " << doubleNumber(x) << std::endl;

    return 0;
}


int doubleNumber(int x)
{
    return 2 * x;
}