#include <iostream>

void swap(int &x, int &y);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;
    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
    return 0;
}

void swap(int &x, int &y) {
    int t;
    int* p1 = &x;
    int* p2 = &y;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}