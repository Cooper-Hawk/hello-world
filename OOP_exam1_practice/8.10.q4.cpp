#include <iostream>


void fizzbuzz(int);


int main()
{
    std::cout << "Please enter an integer to count up to: ";
    int up{};
    std::cin >> up;

    fizzbuzz(up);


    return 0;
}


void fizzbuzz(int up)
{
    for (int i{1}; i <= up; ++i)
    {
        if (i % 3 == 0 && i % 5 == 0 && i % 7 == 0)
        {
            std::cout << "fizzbuzzpop" << std::endl;
        }
        else if (i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "fizzbuzz" << std::endl;
        }
        else if (i % 3 == 0 && i % 7 == 0)
        {
            std::cout << "fizzpop" << std::endl;
        }
        else if (i % 5 == 0 && i % 7 == 0)
        {
            std::cout << "buzzpop" << std::endl;
        }
        else if (i % 3 == 0)
        {
            std::cout << "fizz" << std::endl;
        }
        else if (i % 5 == 0)
        {
            std::cout << "buzz" << std::endl;
        }
        else if (i % 7 == 0)
        {
            std::cout << "pop" << std::endl;
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
}