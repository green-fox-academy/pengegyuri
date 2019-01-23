#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <vector>
#include <sstream>

// Create a function that takes 3 parameters: a path, a word and a number,
// than it should write to a file.
// The path parameter should describes the location of the file.
// The word parameter should be a string, that will be written to the file as lines
// The number paramter should describe how many lines the file should have.
// So if the word is "apple" and the number is 5, than it should write 5 lines
// to the file and each line should be "apple"

void writetofile(std::string path, std::string word, int num);

int main() {

    std::string path = "/home/gyuri/greenfox/pengegyuri/week-02/day-3/writemultiplelines/cmake-build-debug";
    std::string word = "word";
    writetofile(path, word, 19);
    return 0;
}

void writetofile(std::string path, std::string word, int num) {
    std::string file = path + "/my-file.txt";
    std::ofstream myfile;
    myfile.open(file, std::ios_base::app);
    for (int i = 0; i < num; i++) {
        myfile << word << std::endl;
    }
}