// #ifndef MYVECTOR_HPP
// #define MYVECTOR_HPP

// template<typename T>
// class MyVector 
// {
// public:
//     MyVector(int capacity = 1);
//     ~MyVector();
//     MyVector(const MyVector<T>& other);
//     int getCapacity() const;
//     void push_back(const T& value);
//     T pop_back();
//     void print() const;

//     T& at(int index);



// private:
//     void allocate_memory(int memory_size);

//     int* elements;
//     int size;
//     int capacity;


// };


// #endif

#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

template <typename T>
class MyVector
{
public:

    //Constructors & Destructors
    MyVector(int capacity = 1);
    ~MyVector();
    MyVector(const MyVector& other);

    //Member functions that we made in class
    int getCapacity() const { return capacity; }
    void push_back(const T& value);
    T pop_back(void);
    void print() const;
    T& at(int index); //Needs to be modified to add negative index support: -1 = last element, -2 = second to last, etc.

    //New member functions for Lab 7
    int getSize() const; //return current number of elements in the vector
    void clear(); //remove all elements from the vector (set size = 0), allocate new memory with default capacity 10
    void push_front(const T& value); //Insert value at the beginning of the vector (index 0). Shift all existing elements right to make space. Resize if capacity is exceeded (double the capacity)
    void insert(int pos, const T& value); //Insert value at position pos. Support negative indices: Convert -1 to size, -2 to size-1, etc. Shift elements right from position pos to end. Resize if capacity is exceeded (double the capacity)./



private:

    void allocate_memory(int memory_size);

    T *elements;
    int size;
    int capacity;
};


#endif
