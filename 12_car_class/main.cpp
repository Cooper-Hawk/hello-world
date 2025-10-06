//Testing file
#include <iostream>
#include "Car.hpp"
#include "CarDealer.hpp"


bool isEfficient(const Car& car);

int numberOfInefficientCars(const CarDealer&);


int main()
{
    Car ferrari_spider("Ferarri", "Spider", 2021, 16.4);
    Car ferrari_superGT("Ferarri", "superGT", 2025, 23.4);
    Car ferrari_f50("Ferarri", "F50", 2025, 10.5);
    ferrari_spider.print();


    std::cout << '\n' << isEfficient(ferrari_f50) ? "Efficient" : "Inefficient"; '\n' << '\n';


    CarDealer ferrari_lakeland;
    ferrari_lakeland.addCar(ferrari_f50);
    ferrari_lakeland.addCar(ferrari_spider);
    ferrari_lakeland.addCar(ferrari_superGT);

    ferrari_lakeland.showInventory();
    std::cout << numberOfInefficientCars(ferrari_lakeland);



    return 0;
}


bool isEfficient(const Car& car)
{
    return (car.getMPG() > 20.0) ? true : false;
}

int numberOfInefficientCars(const CarDealer& car_dealer)
{
    int n_cars = 0;
    for (Car car : car_dealer.getInventory())
    {
        if (!isEfficient(car))
        {
            n_cars++;
        }
    }
    return n_cars;
}