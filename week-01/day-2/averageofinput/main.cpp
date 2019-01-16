#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that asks for 5 integers in a row,
    // then it should print the sum and the average of these numbers like:
    //
    // Sum: 22, Average: 4.4
    int a, b, c, d, e, f;
    float avg;
    std::cout << "Give me five integer !!!" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;
    f = a + b + c + d + e;
    avg = f / 5;
    std::cout << "Sum: " << f << ", Average: " << avg;
    return 0;
}