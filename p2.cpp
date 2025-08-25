//Include the main iostream library
#include <iostream>

//create main function
int main()
{
    //prompt user to enter their first name
    std::cout << "Please enter your first name: " << std::endl;

    //create a string variable to hold the user's first name
    std::string first;

    //gather the user input
    std::cin >> first;

    //prompt the user to enter their last name
    std::cout << "Please enter your last name: " << std::endl;

    //create a string variable to hold user's last name
    std::string last;

    //gather the user input
    std::cin >> last;

    //Input inital time values
    int weeks{16};
    int numlec{3};
    int lectmin{50};
    double selfstud{4.5};
    int laborday{1};
    int thanks{3};

    //Total number of lectures
    int totlecnum = (weeks * numlec) - laborday - thanks;

    //Total minutes spent in lecture
    int totlecmin = totlecnum * lectmin;

    //Total minutes spent studying at home
    double totselfmin = selfstud * 60;

    //Total minutes
    double totmin = totlecmin + totselfmin;

    //Total seconds
    double totsec = totmin * 60;

    std::cout << "First Name: " << first << std::endl;
    std::cout << "Last Name: " << last << std::endl;
    std::cout << "I am supposed to spend " << totsec << "seconds studying C++ Programming" << std::endl;

    return 0;
}