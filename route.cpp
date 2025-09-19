#include <iostream>
#include <string>
#include <ctime>

//Create a Route structure
class Route
{
private: //Access specifier
    std::string source;
    std::string destination;
    int length;

    void updateLength()
    {
        length = (source.empty() || destination.empty()) ? 0: rand() % 900 + 75;
    }


public:
//Get functions (getters, accessor functions)
    std::string getSource()
    {
        return source;
    }

    std::string getDestination()
    {
        return destination;
    }


    //Set function (mutator functions, setters)
    void setSource(std::string new_source)
    {
        source = new_source;
        updateLength();
    }

    void setDestination(std::string new_destination)
    {
        destination = new_destination;
        updateLength();
    }


    void print()
    {
        std::cout << source << " -> " << destination << " : " << length << std::endl;
    }
};

int main()
{
    srand(time(0));
    //Create an object of Route
    Route fall_trip;

    fall_trip.setSource("Lakeland");
    fall_trip.setDestination("Paris");

    fall_trip.print();
    
    fall_trip.setDestination("New York");
    fall_trip.print();


    return 0;
}