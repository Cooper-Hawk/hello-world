#include <iostream>

void printWhitespace(int, int);
void printToUpper(int);


int main()
{
    std::cout << "Please enter an integer value to use as the upper limit in your number triangle: ";
    int upperLim{};
    std::cin >> upperLim;
    std::cout << std::endl;

    int currentUp{1};
    while (currentUp <= upperLim)
    {
        printWhitespace(upperLim, currentUp);

        printToUpper(currentUp);

        ++currentUp;
    }


    return 0;
}


void printWhitespace(int upperLim, int currentUp)
{
    for (int i{1}; i <= ((upperLim - currentUp) * 2); ++i)
    {
        std::cout << " ";
    }
}


void printToUpper(int currentUp)
{
    for (int i{currentUp}; i >= 1; --i)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}