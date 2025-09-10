#include <iostream>
#include <string>


void printCombinations(int n);
void printCombinations(std::string& s, int n, int i);

int main()
{
    int n{};
    std::cout << "Enter n: ";
    std::cin >> n;

    printCombinations(n);

    return 0;
}


void printCombinations(int n)
{
    //Create a string and initialize with n 'a' characters
    std::string s(n, 'a');

    printCombinations(s, n, 0);
}

void printCombinations(std::string& s, int n, int i)
{
    if (i>= n)
    {
        if (s[0] != s[1] && s[1] != s[2] && s[0] != s[2])
        {
            std::cout << s << std::endl;
            return;
        }
        return;
    }
    while (s[i] <= 'z')
    {
        printCombinations(s, n, i + 1);
        s[i]++;
    }
        
        
    }
    s[i] = 'a';

