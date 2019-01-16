
#include <iostream>

int main(int argc, char* args[]) {

    // Define several things as a variable then print their values
    // Your name as a string
    // Your age as an integer
    // Your height in meters as a double
    // Whether you are married or not as a boolean
    char* myName;
    myName = "Gyuri";
    int myAge = 38;
    double myHeight = 1.75;
    bool myMarried = true;
    std::cout << "My name is " << myName << std::endl;
    std::cout << "My age is " << myAge << std::endl;
    std::cout << "My height is " << myHeight << std::endl;
    std::cout << "How many wifes do I have? " << myMarried << std::endl;

    return 0;
}