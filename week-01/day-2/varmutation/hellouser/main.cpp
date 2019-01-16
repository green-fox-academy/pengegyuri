#include <iostream>

int main(int argc, char* args[]) {

    // Modify this program to greet user instead of the World!
    // The program should ask for the name of the user
    std::string userName;
    std::cout << "Please enter your name : ";
    std::cin >> userName;
    std::cout << "Hello " << userName;

    return 0;
}