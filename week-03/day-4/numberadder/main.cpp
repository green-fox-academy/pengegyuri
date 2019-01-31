#include <iostream>

// Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

int adder(int x);

int main()
{
    std::cout << adder(10);
    return 0;
}
int adder(int x)
{

    if(x == 0)
    {
        return 0;
    } else {
        return x + adder(x - 1);
    }
}