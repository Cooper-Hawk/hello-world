#include <iostream>

void snf(int);


int main()
{
    std::cout << "Please enter an integer to find the number of fives and sevens: ";
    int x{};
    std::cin >> x;

    std::cout << std::endl;

    snf(x);
}


void snf(int x)
{
    int num = x;
    int s{};
    int f{};

    while (x > 0)
    {
        if (x % 10 == 5)
        {
            ++f;
            x /= 10;
        }
        else if (x % 10 == 7)
        {
            ++s;
            x /= 10;
        }
        else
        {
            x /= 10;
        }
    }
    std::cout << "The number " << num << " has " << f << " five(s) and " << s << " seven(s)!" << std::endl;
}