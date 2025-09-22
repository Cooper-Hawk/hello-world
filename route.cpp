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

    //Returns whether the route is long or not
    bool isLong();


public:
    //Constructors
    //Constructors have no return type
    //Constructors are called when the object is created
    //Constructors should be public
    //Constructors cannot be called explicitly

    // //No-argument constructor (first version)
    // Route()
    // {
    //     length = 0;
    // }

    //No-argument constructor (first version)
    Route() : length(0)
    {
        
    }

    //Overloaded constructor
    Route(std::string source_, std::string destination_)
    {
        setSource(source_);
        setDestination(destination_);
    }


//Get functions (getters, accessor functions)
    std::string getSource()
    {
        return source;
    }

    std::string getDestination()
    {
        return destination;
    }
    //getLength
    int getLength(void)
    {
        return length;
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
    fall_trip.print();

    fall_trip.setSource("Lakeland");
    fall_trip.setDestination("Paris");

    fall_trip.print();
    
    fall_trip.setDestination("New York");
    fall_trip.print();

    //Create a Route object with constructor with arguments
    Route christmas_trip("Orlando", "Los Angeles");
    christmas_trip.print();

    //Creating objects
    Route route1; //no-argument constructor
    Route route2{"A", "B"}; //constructor with arguments
    Route route3 = Route(); //no-argument constructor
    Route route4 = Route("C", "D"); //constructor with arguments

    //Route route5(); //THIS IS NOT AN OBJECT.

    std::cout << route4.isLong() << std::endl;


    return 0;
}

//Method implementation
bool Route::isLong()
{
    
    return getLength() > 300;
}