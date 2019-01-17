#include <iostream>
#include <string>

int sum(int x) {
    int y =0;
    for (int i =1; i <=x; i++) {
        y = y + i;
    }
    return y;
}

int main(int argc, char* args[]) {

    // - Write a function called `sum` that sum all the numbers
    //   until the given parameter and returns with an integer
    int x;
    std::cout << "give me a positive integer :";
    std::cin >> x;
    std::cout << "The sum of whole numbers until " << x << " is " << sum(x);

    return 0;
}