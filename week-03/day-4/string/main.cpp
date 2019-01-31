#include <iostream>
#include <string>

// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.


std::string xchanger(std::string string, int size);

int main()
{
    std::string blabla = "hfgfjxhjgfjhgxbhu";
    std::cout << xchanger(blabla, blabla.size());
    return 0;
}

std::string xchanger(std::string string, int size)
{
    int x = size - 1;
    if (x == -1)
    {
        return string;
    } else if (string[x] == 'x')
    {
        string[x] = 'y';
        return xchanger(string, size-1);
    }else {
        return xchanger(string, size-1);
    }
}