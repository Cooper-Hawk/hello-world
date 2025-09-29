#include <iostream>

void printDownto(int outer);

int main()
{
    int outer{5};
    while (outer >= 1)
    {
        printDownto(outer);

        std::cout << std::endl;
        --outer;
    }

    return 0;
}


void printDownto(int outer)
{
    int inner{1};
    while (inner <= outer)
    {
        std::cout << outer << " ";
        --outer;
    }
}