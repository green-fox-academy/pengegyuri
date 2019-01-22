#include <iostream>

int main()
{
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the memory addresses of the elements in the array
    int numbers[5] = {};
    std::cout << "Give me 5 integer!!" << std::endl;
    for (int i = 0; i < 5; i++){
        std::cin >> numbers[i];
    }
    for (int i = 0; i < 5; i++){
        std::cout << numbers + i << std::endl;
    }
    return 0;
}