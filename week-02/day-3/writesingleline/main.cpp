#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <vector>
#include <sstream>

int main() {
    std::ofstream ofile("my-file.txt");
    ofile << "Gyorgy Kardos";
    ofile.close();
    return 0;
}