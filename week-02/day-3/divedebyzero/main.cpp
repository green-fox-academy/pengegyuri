
#include <iostream>
#include <string>
#include <exception>

float tendividedby(int a) {
    return 10/(float)a;
}

int main() {
    int b;
    std::cout << "Give me a whole number! ";
    std::cin >> b;
    try {
        if (b == 0) {
        throw 1;
    }
    std::cout << "Ten divided by your number equals " << tendividedby(b);
    } catch (int x) {
        std::cout << "Cannot divide by 0" << std::endl;
    }
    return 0;
}
