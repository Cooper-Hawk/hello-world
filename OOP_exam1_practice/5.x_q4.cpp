//5.x Question #4

//Write a program that asks for the name and age of two people, then prints which person is older.

/*
Here is the sample output from one run of the program:

Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).
*/

#include <iostream>
#include <string>

int main()
{
    //Person 1
    std::string n1{};
    std::cout << "Enter the name of person #1: ";
    std::getline(std::cin >> std::ws, n1);
    std::cout << std::endl;

    int a1{};
    std::cout << "Enter the age of " << n1 << ": ";
    std::cin >> a1;
    std::cout << std::endl;

    //Person 2
    std::string n2{};
    std::cout << "Enter the name of person #2: ";
    std::getline(std::cin >> std::ws, n2);
    std::cout << std::endl;

    int a2{};
    std::cout << "Enter the age of " << n2 << ": ";
    std::cin >> a2;
    std::cout << std::endl;

    if (a1 > a2)
    {
        std::cout << n1 << " age (" << a1 << ") is older than " << n2 << " age (" << a2 << ")." << std::endl;
    }
    else
    {
        std::cout << n2 << " age (" << a2 << ") is older than " << n1 << " age (" << a1 << ")." << std::endl;
    }

    return 0;
}