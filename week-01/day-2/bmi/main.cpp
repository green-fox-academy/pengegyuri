#include <iostream>
#include <cmath>

int main(int argc, char* args[]) {

    double massInKg = 81.2;
    double heightInM = 1.78;
    std::cout << massInKg / pow(heightInM, 2) << std::endl;

    return 0;
}