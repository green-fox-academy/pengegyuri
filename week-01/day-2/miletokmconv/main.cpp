#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for an integer that is a distance in kilometers,
    // then it converts that value to miles and prints it
    int a;
    float b;
    std::cout << "Please enter a distance in kilometers : ";
    std::cin >> a;
    b = a * 0.621371192;
    std::cout << "The distance in miles is : " << b;
    return 0;
}