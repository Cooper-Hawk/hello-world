#ifndef CARDEALER_H
#define CARDEALER_H

#include <exception>
#include <iostream>
#include "CarDealer.hpp"


void CarDealer::showInventory() const
{
    for(int i = 0; i < inventory.size(); i++)
    {
        inventory[i].print();
        std::cout << "-------------\n";
    }

}

void CarDealer::addCar(const Car& car)
{
    inventory.push_back(car);
}

#endif