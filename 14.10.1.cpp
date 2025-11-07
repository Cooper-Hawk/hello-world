#include <iostream>
#include <string>

class Ball
{
private:
    std::string color;
    double radius;

public:
    Ball(std::string color, double radius)
    {
        this->color = color;
        this->radius = radius;
    }

    std::string getColor() const
    {
        return color;
    }

    double getRadius() const
    {
        return radius;
    }
};

void print(const Ball& ball)
{
    std::cout << "Ball (" << ball.getColor() << ", " << ball.getRadius() << ")" << std::endl;
}


int main()
{
	Ball blue { "blue", 10.0 };
	print(blue);

	Ball red { "red", 12.0 };
	print(red);

	return 0;
}