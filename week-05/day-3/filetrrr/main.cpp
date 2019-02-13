#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

void doorUsagecounter(std::string inputfile_name, std::string outputfile_name);

int main(int argc, char* args[])
{
    doorUsagecounter("usage.txt", "out.txt");

    return 0;
}

void doorUsagecounter(std::string inputfile_name, std::string outputfile_name)
{
    std::ifstream input_filestream(inputfile_name);
    std::ofstream output_filestream(outputfile_name);
    std::string temp, type_temp;
    std::vector<std::string> strvec = {};
    std::vector<int> numvec = {};
    bool newtype = true;
    try {
        if (!input_filestream.good() || !output_filestream.good()) {
            throw 3;
        } else {
            while (getline(input_filestream, temp)) {
                newtype = true;
                type_temp = temp.substr(temp.find(" "), temp.find(" ",(temp.find(" ") + 1))-temp.find(" "));
                //substracts characters between spaces
                for (int i = 0; i < strvec.size(); ++i) {
                    if (type_temp == strvec[i]) {
                        numvec[i]++;
                        newtype = false;
                    }
                }
                if (newtype){
                    strvec.push_back(type_temp);
                    numvec.push_back(1);
                }
            }
            for (int i = 0; i < strvec.size(); ++i) {
                std::cout << strvec[i] << ": " << numvec[i] << std::endl;
                output_filestream << strvec[i] << ": " << numvec[i] << std::endl;
            }
        }
    } catch(int e) {
        std::cout << "File couldn't be opened" << std::endl;
    }
    input_filestream.close();
    output_filestream.close();
}