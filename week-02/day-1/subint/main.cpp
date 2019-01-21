#include <iostream>
#include <vector>
#include <string>
#include <sstream>

std::vector<int> partOfnumbers(std::vector<int> num, int req);

int main(int argc, char* args[])
{
    //  Create a function that takes a number and a vector of numbers as a parameter
    //  Returns the indeces of the numbers in the vector where the first number is part of
    //  Returns an empty list if the number is not part any of the numbers in the vector

    //  Example:
    std::vector<int> numbers = {1, 11, 34, 52, 61};
    //subInt(1, numbers);
    //  should print: `[0, 1, 4]`
    //subInt(7, numbers);
    //  should print: '[]'
    std::cout << "[";
    for (int i = 0; i < partOfnumbers(numbers, 1).size(); i++) {
        if (i != 0) std::cout << ", ";
        std::cout << partOfnumbers(numbers, 1)[i] ;
    }
    std::cout << "]" << std::endl;
    std::cout << "[";
    for (int i = 0; i < partOfnumbers(numbers, 7).size(); i++) {
        if (i != 0) std::cout << ", ";
        std::cout << partOfnumbers(numbers, 7)[i];
    }
    std::cout << "]" << std::endl;
    return 0;
}

std::vector<int> partOfnumbers(std::vector<int> num, int req) {
    std::vector<int> indeces;
    std::stringstream ss1;
    ss1 << req;
    std::string str1 = ss1.str();
    for (int i = 0; i < num.size(); i++) {
        std::stringstream ss2;
        ss2 << num[i];
        std::string str2 = ss2.str();
        //std::cout << str2 << std::endl;
        if (str2.find(str1) != std::string::npos) {
            indeces.push_back(i);
        }
    }
    return indeces;
}