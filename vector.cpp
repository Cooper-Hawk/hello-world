#include <iostream>
#include <vector>


void print(const std::vector<int>& v);
void rotateRight(std::vector<int>& v, int k);
void rotateLeft(std::vector<int>& v, int k);


int main()
{
    //Create a vector (initialization list)
    std::vector<int> v {1, 2, 3, 4, 5, 6};
    print(v);


    //create with size and default value
    std::vector<int> v2(5,10); //5 elements, each set to 10
    print(v2);


    //create a copy from another vector
    std::vector<int> v3(v);
    print(v3);


    //print the current number of elememts
    std::cout << v3.size() << std::endl;

    //front and back
    std::cout << "Front " << v3.front() << std::endl;
    std::cout << "Back " << v3.back() << std::endl;


    //Add to the end
    v3.push_back(8);
    v3.push_back(9);

    
    //remove the last element
    v3.pop_back();
    std::cout << "After addition and removal\n";
    print(v3);


    //iterators - is an object that enables traversal over elements
    /*
        begin(): point to the first element
        end(): points to one past the last one
    */


    //insert an element (iterator, value)
    v3.insert(v3.begin(), 100);
    print(v3);


    //insert 999 in the middle
    int middle = v3.size()/2;
    v3.insert(v3.begin() + middle, 999);
    print(v3);


    //erase (iterator)
    v3.erase(v3.begin() + 1); //remove the second element
    print(v3);


    //rotate right
    rotateRight(v3,2);
    print(v3);

    //rotate left
    rotateLeft(v3,2);
    print(v3);

    return 0;
}

void print(const std::vector<int>& v)
{
    for (int el : v)
    {
        std::cout << el << ' ';
    }
    std::cout << std::endl;
}

void rotateRight(std::vector<int>& v, int k)
{
    k %= v.size();
    while(k)
    {
        v.insert(v.begin(), v.back());
        v.pop_back();
        k--;
    }
}

void rotateLeft(std::vector<int>& v, int k)
{
    k %= v.size();
    while(k)
    {
        v.insert(v.end(), v.front());
        v.erase(v.begin());
        k--;
    }
}

//push allows you to push a value into the vector
//pop deletes a value from the vector
//begin and end are iterators