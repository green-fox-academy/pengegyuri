#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <vector>
#include <sstream>

int linecounter(std::string filename);

int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file
    std::string filename = "my-file.txt";
    std::cout << linecounter(filename);

    return 0;
}
int linecounter(std::string filename) {
    int numlines = 0;
    std::string line;
    std::ifstream myfile(filename);
    while(std::getline(myfile, line)) {
        numlines += 1;
    }
    myfile.close();
    return numlines;
}