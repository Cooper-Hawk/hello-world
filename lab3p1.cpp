// Problem 1

//include the iostream library for cout printing
#include <iostream>

//include the vector library so we can use vectors in our function
#include <vector>


//initialize the function "numberOfDuplicates" which will be used to find the number of duplicate numbers in a given vector
int numberOfDuplicates(const std::vector<int>& nums);

//initialize the function "printVector" which returns the used vector inside of curly braces with commas in between each number
void printVector(const std::vector<int>& nums);


/*
int main()
{
     std::vector<int> v1 = {1, 1, 1, 1};
     std::vector<int> v2 = {1, 1, 2, 2};
     std::vector<int> v3 = {1, 3, 4, 3, 1, 3, 4, 3};
     std::vector<int> v4 = {1, 2, 3, 4};

     std::cout << "The vector is: ";
     printVector(v1);
     std::cout << std::endl << "It has " << numberOfDuplicates(v1) << " duplicate(s)" << std::endl;

     std::cout << "The vector is: ";
     printVector(v2);
     std::cout << std::endl << "It has " << numberOfDuplicates(v2) << " duplicate(s)" << std::endl;

     std::cout << "The vector is: ";
     printVector(v3);
     std::cout << std::endl << "It has " << numberOfDuplicates(v3) << " duplicate(s)" << std::endl;

     std::cout << "The vector is: ";
     printVector(v4);
     std::cout << std::endl << "It has " << numberOfDuplicates(v4) << " duplicate(s)" << std::endl;

     return 0;
}
     */


int numberOfDuplicates(const std::vector<int>& nums)
{
    //begin counting how many duplicates we have encountered
    int dupeCount = 0;

    /*begin iterating over every element in our vector (starting with the first element) to check if there are duplicates
    initialize variable i which will serve as our iterating variable
    the loop will run as long as i is smaller than the size of the vector
    i increments +1 after every loop*/

    for (int i = 0; i < nums.size(); i++)
    {
        //reads false currently, will read true when a duplicate is encountered
        int duplicate = 0;
        //reads false currently, will read true when a number is already counted
        int counted = 0;


        /*check to see if number has been present already
        j checks every element against the current i element beginning from the first element (will not run for the first iteration because j == i)
        to see if there is a duplicate that has been read already
        if there is, the loop breaks
        this prevents duplicate numbers from being counted multiple times*/
        for(int j = 0; j < i; j++)
        {
            if(nums[i] == nums[j])
            {
                counted = 1;
                break;
            }
        }
        //if there was a duplicate, the program is told to skip the rest of the loop and begin the next iteration
        if(counted != 0)
        {
            continue;
        }
        //now we look for duplicates ahead of our current index
        //these duplicates actually count towards our duplicate count
        for(int k = i + 1; k < nums.size(); k++)
        {
            if(nums[i] == nums[k])
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate != 0)
        {
            dupeCount++;
        }
    }
    return dupeCount;
}

//print our vector in the correct manner
void printVector(const std::vector<int>& nums)
{
    std::cout << "{";
    for(int l = 0; l < nums.size(); l++)
    {
        std::cout << nums[l];
        if(l != nums.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << "}";
}