// #ifndef POINT_H
// #define POINT_H

// #include <iostream>

// class Point
// {
// public:
//     Point(int x = 0, int y = 0);

//     //logic operator
//     bool operator==(const Point& other) const;

//     bool operator!=(const Point& other) const;


//     int& operator[](int index);

//     //Arithmetic operator
//     Point operator+(const Point& other);

//     //Minus
//     Point operator-(const Point& other);

//     //Arithmetic assignment operator
//     Point operator+=(const Point& other);

//     //multiplication
//     Point operator*(const Point& other);

//     //multequals
//     Point operator*=(const Point& other);

//     //subequals
//     Point operator-=(const Point& other);


// private:
//     int x;
//     int y;
// };

// #endif

#ifndef POINT_H
#define POINT_H

#include <string>
#include <iostream>


class Point {
public:

Point(int x = 0, int y = 0, const char *tag = nullptr);
~Point();
Point(const Point& other); // copy constructor

// Logic operator
bool operator==(const Point& other) const;
bool operator!=(const Point& other) const;

// Arithmetic operator
Point operator+(const Point& other) const;
Point operator*(const Point& other) const;

// Augmented Assignment Operators
Point& operator+=(const Point& other);
Point& operator*=(const Point& other);

// Subscript operator
int& operator[](int index);

//Unary operator
Point operator-();

Point operator++();
Point operator++(int );

// TODO decrement

// Assignment operator
void operator=(const Point& other);

std::string toString() const;

// friend function
friend int sum_coordinates();

friend std::ostream& operator<<(std::ostream& out, Point& point);

// TODO
friend std::istream& operator>>(std::ostream& in, Point& point);

private:
int x;
int y;
char *tag;
};

// std::ostream& operator<<(std::ostream& out, Point& point);

#endif
