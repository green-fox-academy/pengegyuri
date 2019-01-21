
#include <iostream>
#include <string>

int main(int argc, char* args[])
{
	std::string example = "In a dishwasher far far away";


    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away

    example.replace(example.begin() + 5, example.begin() + 15,  "galaxy");

    std::cout << example << std::endl;
    return 0;
}