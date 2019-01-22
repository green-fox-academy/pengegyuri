#include <iostream>

int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    float* p_temperature = &temperature;
    std::cout << temperature << std::endl;
    *p_temperature = -2.3 << std::endl;
    std::cout << temperature;
    return 0;
}