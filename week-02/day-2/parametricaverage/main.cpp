#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for a number.
    // It would ask this many times to enter an integer,
    // if all the integers are entered, it should print the sum and average of these
    // integers like:
    //
    // Sum: 22, Average: 4.4
    int numberofinputs, sum, temp;
    sum = 0;
    std::cout << "How many number would you like to summerize? ";
    std::cin >> numberofinputs;
    for (int i = 1;  i <= numberofinputs; i++) {
        std::cout << i << ". number : ";
        std::cin >> temp;
        sum += temp;
    }
    std::cout << "Sum: " << sum << ", Average: " << float(sum)/float(numberofinputs);
    return 0;
}