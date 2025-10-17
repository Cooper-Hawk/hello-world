#include "MyVector.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> n;
    n.push_back(10);
    n.at(0) = 100;
    std::cout << n.at(0) << std::endl;


    //Create a vector object dynamically
    MyVector *mvPtr = new MyVector(10);

    // mvPtr->push_back(1);
    // mvPtr->push_back(2);
    // mvPtr->push_back(3);
    // mvPtr->push_back(4);

    for (int i = 0; i < 200; ++i)
    {
        mvPtr->push_back(rand() % 100);
        
    }
    mvPtr->print();

    // for (int i = 0; i < 201; ++i)
    // {
    //     mvPtr->pop_back();
    //     std::cout << mvPtr->getCapacity() << std::endl;
    // }

    //mvPtr->print();
    mvPtr->at(0) = 100;
    std::cout << "using at " << mvPtr->at(0) << std::endl;


    delete mvPtr;
    return 0;
}