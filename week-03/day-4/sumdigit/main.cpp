#include <iostream>

// Given a non-negative int n, return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
// divide (/) by 10 removes the rightmost digit (126 / 10 is 12).

int sumdigit(int x);

int main()
{
    std::cout << sumdigit(129);
    return 0;
}
int sumdigit(int x)
{

    if(x == 0)
    {
        return 0;
    } else {
        return x % 10 + sumdigit(x / 10);
    }
}