#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <vector>
#include <sstream>

// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful

bool copyfilecontent(std::string file1, std::string file2);

int main() {
    std::string file1name = "my-file.txt";
    std::string file2name = "my-file_copy.txt";
    std::cout << copyfilecontent(file1name, file2name);
    return 0;
}

bool copyfilecontent(std::string file1, std::string file2) {
    bool iscopied = true;
    try {
        std::string line;
        std::ifstream myfile1(file1);
        myfile1.exceptions(std::ifstream::failbit | std::ifstream::badbit );
        std::ofstream myfile2(file2);
        myfile2.exceptions(std::ofstream::failbit | std::ofstream::badbit );
        while(std::getline(myfile1, line)) {
            myfile2 << line << std::endl;
            if (myfile1.eof()) break;      //exeption without this : basic_ios::clear: iostream error
        }
    } catch (std::ofstream::failure& e) {
        iscopied = false;
        std::cout << e.what() << std::endl;
        }
    myfile1.close();
    myfile2.close();	
    return iscopied;
}
