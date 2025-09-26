//Header file (.hpp or .h)
//Description of the class


/*
    To-Do
    Add:
    mileage: the odometer of the car (how many miles it has)
    fuel_capacity: tank capacity of the car
    fuel_level: current fuel in gallons
    
    Methods:
    void refuel(double gallons); do you have enough room to fill with the gallons, make sure you have a fuel capacity for a full tank
    void drive(double distance); if car has enough fuel to drive the given distance, print <Car (make, model) is driving!>
    
*/
#include <string>

class Car 
{
public:
    //Constructors
    Car(); // no-arg (arguments)
    Car(std::string m_make, std::string m_model, int m_year, double m_MPG);

    //Getters
    //Constant methods - cannot modify class properties
    std::string getMake() const;
    std::string getModel() const;
    int getYear() const;
    double getMPG() const;

    //Setters
    void setMake(std::string make);
    void setModel(std::string model);
    void setYear(int year);
    void setMPG(double MPG);

    //Methods
    void print() const;
private:
    std::string m_make;
    std::string m_model;
    int m_year;
    double m_MPG;
};