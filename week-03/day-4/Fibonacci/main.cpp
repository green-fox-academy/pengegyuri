#include <iostream>


// Write a recursive function that takes one parameter: n and counts down from n.

int Fibonacci(int n);

int main()
{
    int n;
    std::cout << "Gimme da nummba!!!" <<std::endl;
    std::cin >> n;
    std::cout << Fibonacci(n);

    return 0;
}

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else {
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
    }
}