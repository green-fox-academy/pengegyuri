
#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for two integers
    // The first represents the number of chickens the farmer has
    // The second represents the number of pigs owned by the farmer
    // It should print how many legs all the animals have
    int chicken, pig;
    std::cout << "Please enter how many chickens do you have : ";
    std::cin >> chicken;
    std::cout << "Please enter how many pigs do you have : ";
    std::cin >> pig;
    std::cout << "You have " << chicken * 2 + pig * 4 << " animal legs overall";

    return 0;
}