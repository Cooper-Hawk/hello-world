//problem 2

#include <iostream>

void setDeepValue(int ***p, int value);


/*int main()
{
    int x = 0;
    int *p1 = &x;
    int **p2 = &p1;
    int ***p3 = &p2;

    setDeepValue(p3, 42);

    std::cout << "x = " << x << std::endl;
}
    */


void setDeepValue(int ***p, int value)
{
    ***p = value;
}