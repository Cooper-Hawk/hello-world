// #include "MyVector.hpp"
// #include <iostream>

// //Implement constructor
// MyVector::MyVector(int capacity) : size(0)
// {
//     this->capacity = capacity;
//     elements = new int [capacity];
// }

// MyVector::~MyVector()
// {
//     delete [] elements;
// }

// MyVector::MyVector(const MyVector& other)
// {
//     //TODO 1 (create copy constructor) MANDATORY!!
//     size = other.size;
//     capacity = other.capacity;
//     elements = new int [capacity];
// }

// void MyVector::push_back(int value)
// {
//     if (size >= capacity)
//     {
//         allocate_memory(capacity * 2);
//     }
//     elements[size] = value;
//     size++;
// }

// //TODO 3 create a function pop_back
// //void pop_back(); (capacity should not be greater than doubled size)
// int MyVector::pop_back()
// {
//     if (size > 0)
//     {
//         if (size - 1 < capacity / 2)
//         {
//             allocate_memory(capacity / 2);
//         }
//         return elements[size--];
//     }
//     else
//     {
//         //Throw an exception
//         throw "The vector is empty!";
//     }
// }

// void MyVector::print() const
// {
//     std::cout << "[ ";
//     for (int i{0}; i < size; i++)
//     {
//         std::cout << elements[i] << ' ';
//     }
//     std::cout << " ]\n";
// }

// void MyVector::allocate_memory(int memory_size)
// {
//     capacity = memory_size;
//     int* old = elements;
//     //Allocate a new memory (bigger or smaller)
//     elements = new int[memory_size];
//     for (int i = 0; i < size; i++)
//     {
//         elements[i] = old[i];
//     }
//     //Deallocate the old memory
//     delete [] old;

// }

// int MyVector::getCapacity() const
// {
//     return capacity;
// }

// int& MyVector::at(int index)
// {
//     if (index < 0 || index > size - 1)
//     {
//         throw "Invalid index";
//     }
//     return elements[index];
// }


#include "MyVector.hpp"
#include <iostream>

// Constructor
template<typename T>
MyVector<T>::MyVector(int capacity) : size(0)
{
    this->capacity = capacity;
    elements = new T[capacity];
}

// Destructor
template<typename T>
MyVector<T>::~MyVector()
{
    delete [] elements;
}

// Copy constructor
template<typename T>
MyVector<T>::MyVector(const MyVector<T>& other)
{
    size = other.size;
    capacity = other.capacity;
    elements = new T[capacity];

    //copy elements
    for(int i = 0; i < size; i++)
    {
        elements[i] = other.elements[i];
    }
}

template<typename T>
void MyVector<T>::push_back(const T& value)
{
    if (size >= capacity)
    {
        allocate_memory(capacity * 2);
    }
    elements[size] = value;
    size++;
}

template<typename T>
T MyVector<T>::pop_back()
{
    if (size > 0)
    {
        if (size - 1 < capacity / 2)
        {
            allocate_memory(capacity / 2);
        }
        return elements[--size];
    }
    else
    {
        // Throw an exception
        throw "The vector is empty!";
    }
}

template<typename T>
void MyVector<T>::print() const
{
    std::cout << "[ ";
    for (int i = 0; i < size; i++)
    {
        std::cout << elements[i] << ' ';
    }
    std::cout << "]\n"; 
}

template<typename T>
void MyVector<T>::allocate_memory(int memory_size)
{
    capacity = memory_size;
    T *old = elements;
    // Allocate a new memory (bigger or smaller)
    elements = new T[memory_size];
    for (int i = 0; i < size; i++)
    {
        elements[i] = old[i];
    }
    // Deallocate the old memory
    delete [] old;
}

template<typename T>
int MyVector<T>::getSize() const
{
    return size;
}

template<typename T>
void MyVector<T>::clear()
{
    delete [] elements;
    capacity = 10;
    size = 0;
    elements = new T[capacity];
}

template<typename T>
void MyVector<T>::push_front(const T& value)
{
    if (size >= capacity)
    {
        allocate_memory(capacity * 2);
    }

    for (int i = size; i > 0; i--)
    {
        elements[i] = elements[i - 1];
    }

    elements[0] = value;
    size++;
}

template<typename T>
void MyVector<T>::insert(int pos, const T& value)
{
    if (pos < 0)
    {
        pos = size + pos + 1;
    }

    if (pos < 0)
    {
        pos = 0;
    }

    if (pos > size)
    {
        pos = size;
    }

    if (size >= capacity)
    {
        allocate_memory(capacity * 2);
    }

    for (int i = size; i > pos; i--)
    {
        elements[i] = elements[i-1];
    }

    elements[pos] = value;
    size++;
}

template<typename T>
T& MyVector<T>::at(int index)
{
    if (index < 0)
    {
        index = size + index;
    }

    if (index < 0 || index >= size)
    {
        throw std::out_of_range("Index out of range!");
    }

    return elements[index];
}
