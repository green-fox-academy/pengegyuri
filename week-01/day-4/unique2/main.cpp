
#include <iostream>
#include <string>
#include <vector>

std::vector<int> funiq(std::vector<int> n) {
    for (int i = 0; i < n.size(); i++) {
        for (int j = i + 1; j < n.size(); j++) {
            if (n[i] == n[j]) {
                n.erase(n.begin() + j);
            }
        }
    }
    return n;
}

int main(int argc, char* args[]) {

    //  Create a function that takes a list of numbers as a parameter
    //  Don't forget you have pass the size of the list as a parameter as well
    //  Returns a list of numbers where every number in the list occurs only once

    //  Example
    //std::cout << (unique(numbers)) << std::endl;
    //  should print: `[1, 11, 34, 52, 61]`

    std::vector<int> numbers = {1, 11, 34, 11, 52, 61, 1, 34};
    for (int i = 0; i < funiq(numbers).size(); i++) std::cout << funiq(numbers)[i] << " ";
    return 0;
}