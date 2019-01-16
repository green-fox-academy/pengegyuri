#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that stores 3 sides of a cuboid as variables (doubles)
    // The program should write the surface area and volume of the cuboid like:
    //
    // Surface Area: 600
    // Volume: 1000
    double a, b, c;
    std::cout << "a : ";
    std::cin >> a;
    std::cout << std::endl;
    std::cout << "b : ";
    std::cin >> b;
    std::cout << std::endl;
    std::cout << "c : ";
    std::cin >> c;
    std::cout << std::endl;
    std::cout << "Surface Area: " << (a * b + a * c + c * b) * 2 << std::endl;
    std::cout << "Volume: " << a * b * c << std::endl;
    return 0;
}
