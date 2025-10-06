#include <vector>
#include "Car.hpp"



class CarDealer
{
public:   
    void showInventory() const;
    void addCar(const Car& car);
    std::vector<Car> getInventory() const {return inventory; }


private:
    std::vector<Car> inventory;



};