//The implementation of a Car class
#include "Car.hpp"
#include <iostream>

//no arg constructor

Car::Car()
{
    setMake("Unknown");
    setModel("Unknown");
    setYear(1900);
    setMPG(0.0);
}

Car::Car(std::string m_make, std::string m_model, int m_year, double m_MPG)
{
    setMake(m_make);
    setModel(m_model);
    setYear(m_year);
    setMPG(m_MPG);
}

//Setters
void Car::setMake(std::string make)
{
    if (!make.empty())
    {
        m_make = make;
    }
}
void Car::setModel(std::string model)
{
    if (!model.empty())
    {
        m_model = model;
    }
}
void Car::setYear(int year)
{
    m_year = (year >= 1900 && year <= 2025) ? year : 1900;
}
void Car::setMPG(double MPG)
{
    m_MPG = (MPG > 0) ? MPG = 0 : 5 ;
}

//Getters
std::string Car::getMake() const {return m_make;}
std::string Car::getModel() const {return m_model;}
int Car::getYear() const {return m_year;}
double Car::getMPG() const {return m_MPG;}

//Print
void Car::print() const
{
    std::cout << getMake() <<std::endl;
    std::cout << getModel() <<std::endl;
    std::cout << getYear() <<std::endl;
    std::cout << getMPG() <<std::endl;
}