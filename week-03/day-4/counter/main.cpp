#include <iostream>


// Write a recursive function that takes one parameter: n and counts down from n.

int counter(int x);

int main()
{
    counter(7);
    return 0;
}

int counter(int x)
{
    std::cout << x << std::endl;
    if(x == 0)
    {
        return 0;
    } else {
        return counter(x - 1);
    }
}