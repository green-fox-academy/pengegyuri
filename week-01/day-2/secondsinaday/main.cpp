#include <iostream>

int main(int argc, char* args[]) {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables
    std::cout << (24 - currentHours) * 3600 - (60 - currentMinutes) * 60 - currentSeconds;

    return 0;
}