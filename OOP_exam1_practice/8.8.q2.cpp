#include <iostream>

int main()
{
    char let{'a'};

    for (int i{1}; i <= 26; ++i)
    {
        std::cout << let << std::endl;
        ++let;
    }




    return 0;
}