#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";
    int* p_a = &a;
    double* p_b = &b;
    std::cout << "Memory address of 'a' is: " << p_a << std::endl;
    std::cout << "Memory address of 'b' is: " << p_b<< std::endl;
    std::cout << "Value of 'p_a' is: " << *p_a << std::endl;
    std::cout << "Value of 'p_b' is: " << *p_b << std::endl;
    return 0;
}