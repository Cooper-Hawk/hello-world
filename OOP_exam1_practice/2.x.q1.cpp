#include <iostream>

int readNumber();
void writeAnswer(int, int);

int main()
{
    int x{readNumber()};
    int y{readNumber()};

    writeAnswer(x, y);


    return 0;
}


int readNumber()
{
    int a{};
    std::cout << "Please enter a single integer: ";
    std::cin >> a;

    return a;
}

void writeAnswer(int a, int b)
{
    std::cout << "The value of two integers added together is: " << a + b << std::endl;
}
