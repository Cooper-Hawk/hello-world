#include <iostream>
#include <cmath>

class Point2d
{
private:
    double m_x = 0.0;
    double m_y = 0.0;

public:
    Point2d(double x = 0.0, double y = 0.0)
    {
        m_x = x;
        m_y = y;
    }

    void print()
    {
        std::cout << "x: " << m_x << " y: " << m_y << std::endl;
    }

    double distanceTo(Point2d other)
    {
        return std::sqrt((this->m_x - other.m_x)*(this->m_x - other.m_x) + (this->m_y - other.m_y)*(this->m_y - other.m_y));
    }
};


int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}