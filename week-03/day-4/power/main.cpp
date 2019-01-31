#include <iostream>

// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).

int power(int base, int magnitude);

int main()
{
    std::cout << power(3, 6);
    return 0;
}

int power(int base, int magnitude)
{
    if(magnitude == 0)
    {
        return 1;
    } else {
        return base * power(base, magnitude - 1);
    }
}