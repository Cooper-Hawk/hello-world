#include <iostream>

class Fraction
{
private:
    int numerator{ 0 };
    int denominator{ 1 };

public:
    Fraction(int numerator = 0, int denominator = 1)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void getFraction()
    {
        std::cout << "Enter a value for numerator: ";
        std::cin >> numerator;
        std::cout << "Enter a value for denominator: ";
        std::cin >> denominator;
        std::cout << '\n';
    }

    Fraction multiply(const Fraction& other)
    {
        return { this->numerator * other.numerator, this->denominator * other.denominator };
    }

    void printFraction()
    {
        std::cout << numerator << '/' << denominator << '\n';
    }

};



int main()
{
    Fraction f1{};
    f1.getFraction();
    Fraction f2{};
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).printFraction();

    return 0;
}