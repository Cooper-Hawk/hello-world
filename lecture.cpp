#include <iostream>
#include <string>


//Prototype
void printLecture(const struct Lecture& lecture);
struct Lecture createLecture(std::string title, std::string author, int duration);

//Create a structure
struct Lecture
{
    std::string title;
    int duration;

};


int main()
{
    int a;
    //Create a Lecture object
    struct Lecture oop_the_best;

    oop_the_best.title = "Structures";
    oop_the_best.duration = 50 * 60;

    std::cout << "Title: " << oop_the_best.title << std::endl;
    std::cout << "Duration: " << oop_the_best.duration / 60 << " minutes" << std::endl;

    //Call a function
    printLecture(oop_the_best);


    return 0;
}



void printLecture(const struct Lecture& lecture)
{
    //Access the properties of an object
    std::cout << "Title: " << oop_the_best.title << std::endl;
    std::cout << "Duration: " << oop_the_best.duration / 60 << " minutes" << std::endl;
}