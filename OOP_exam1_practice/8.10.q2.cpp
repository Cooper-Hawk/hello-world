#include <iostream>

int sumTo(int x);


int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    
    std::cout << sumTo(x);
    std::cout << std::endl;

    return 0;
}


int sumTo(int x)
{
    int sum{};

    for (int i{1}; i <= x; ++i)
    {
        sum += i;
    }

    return sum;
}