#include "MyVector.hpp"
#include <iostream>

//Implement constructor
MyVector::MyVector(int capacity) : size(0)
{
    this->capacity = capacity;
    elements = new int [capacity];
}

MyVector::~MyVector()
{
    delete [] elements;
}

MyVector::MyVector(const MyVector& other)
{
    //TODO 1 (create copy constructor) MANDATORY!!
    elements = new int (*other.elements);
}

void MyVector::push_back(int value)
{
    if (size != capacity)
    {
        elements[size] = value;
        size++;
    }
    else
    {
        //TODO 2 (create new pointer for an array with a larger size and update the array to allow it to hold more data) MANDATORY!!
        static increase = 1;
        int* elements2 = new int [capacity + increase];
        for (int i = 0; i < capacity; ++i)
        {
            elements2[i] = elements[i];
        }
        elements2[size];
        size++;
        increase++;
        delete elements[size];
    }
}

//TODO 3 create a function pop_back
//void pop_back(); (capacity should not be greater than doubled size)

void MyVector::print() const
{
    std::cout << "[ ";
    for (int i{0}; i < size; i++)
    {
        std::cout << elements[i] << ' ';
    }
    std::cout << " ]\n";
}