#include <iostream>
#include <string>

class Ball
{
private:
    std::string color;
    double radius;

public:
    Ball(std::string color = "Black", double radius = 10.0)
    {
        this->color = color;
        this->radius = radius;
        std::cout << "Ball(" << color << ", " << radius << ")" << std::endl;
    }

    Ball(double radius)
    {
        Ball{"black", radius};
    }
};


int main()
{
    Ball def{};
    Ball blue{ "blue" };
    Ball twenty{ 20.0 };
    Ball blueTwenty{ "blue", 20.0 };

    return 0;
}