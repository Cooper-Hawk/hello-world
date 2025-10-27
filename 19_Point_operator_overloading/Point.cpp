// #include "Point.hpp"

// Point::Point(int x, int y)
// {
//     this->x = x;
//     this->y = y;
// }

// //Logic operator
// bool Point::operator==(const Point& other) const
// {
//     return (x == other.x && y == other.y);
// }

// bool Point::operator!=(const Point& other) const
// {
//     return !(*this == other);
// }

// //array seeking operator
// int& Point::operator[](int index)
// {
//     return (index == 0) ? x : y;
// }

// //adding
// Point Point::operator+(const Point& other)
// {
//     return Point(x + other.x, y + other.y);
// }

//  //Minus
// Point operator-(const Point& other)
// {
//     return Point(x - other.x, y - other.y);
// }

//  //Arithmetic assignment operator
// Point operator+=(const Point& other)
// {
//     return Point(x += other.x, y += other.y);
// }

// //multiplication
// Point operator*(const Point& other)
// {
//     return Point(x * other.x, y * other.y);
// }

// //multequals
// Point operator*=(const Point& other)
// {
//     return Point(x *= other.x, y *= other.y);
// }

// //subequals
// Point operator-=(const Point& other)
// {
//     return Point(x -= other.x, y -= other.y);
// }

#include "Point.hpp"
#include <cstring>

Point::Point(int x, int y, const char *tag) {
this->x = x;
this->y = y;
if (tag)
{
    int size = strlen(tag);
    this->tag = new char[size + 1];
    strcpy(this->tag, tag);
}
else
{
    this->tag = nullptr;
}
}

Point::~Point()
{
    if (tag)
    {
        delete [] tag;
    }
}

Point::Point(const Point& other)
{
    x = other.x;
    y = other.y;
    if (other.tag)
    {
        int size = strlen(other.tag);
        this->tag = new char[size + 1];
        strcpy(this->tag, other.tag);
    }
    else
    {
        tag = nullptr;
    }
}

bool Point::operator==(const Point& other) const {
return (x == other.x && y == other.y);
}

bool Point::operator!=(const Point& other) const {
return !(*this == other);
}

int& Point::operator[](int index) {
return (index == 0) ? x : y;
}

Point Point::operator+(const Point& other) const {
return Point(x + other.x, y + other.y);
}

Point Point::operator*(const Point& other) const {
return Point(x * other.x, y * other.y);
}

Point& Point::operator+=(const Point& other) {
*this = *this + other;
return *this;
}

Point& Point::operator*=(const Point& other) {
*this = *this * other;
return *this;
}

std::string Point::toString() const
{
    return "(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}

Point Point::operator-()
{
    return Point(-x, -y);
}

//Preincrement
Point Point::operator++()
{
    x += 1;
    y += 1;
    return *this;
}

//Postincrement
Point Point::operator++(int )
{
    Point temp(*this);
    this->x += 1;
    this->y += 1;
    return temp;
}

void Point::operator=(const Point& other)
{
    x = other.x;
    y = other.y;
    if (tag)
    {
        delete [] tag;
    }
    if (other.tag)
    {
        int size = strlen(other.tag);
        tag = new char[size];
        strcpy(tag, other.tag);
    }
    else
    {
        tag = nullptr;
    }
}

std::ostream& operator<<(std::ostream& out, Point& point)
{
    out << point.toString();
    return out;
}