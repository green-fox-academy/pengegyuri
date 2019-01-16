#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two numbers and prints the bigger one
    float usera,userb;
    std::cout << "Give me two numbers !!! ";
    std::cin >> usera;
    std::cin >> userb;
    if (usera < userb){
        std::cout << "The bigger is: " << userb;
    } else std::cout << "The bigger is: " << usera;

    return 0;
}