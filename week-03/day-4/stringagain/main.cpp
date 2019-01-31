#include <iostream>
#include <string>

// Given a string, compute recursively a new string where all the 'x' chars have been removed.



std::string xerase(std::string string, int size);

int main()
{
    std::string blabla = "hfgfjxhjgfjhgxbhu";
    std::cout << xerase(blabla, blabla.size());
    return 0;
}

std::string xerase(std::string string, int size)
{
    int x = size - 1;
    if (x == -1)
    {
        return string;
    } else if (string[x] == 'x')
    {
        string.erase(string.begin() + x);
        return xerase(string, size-1);
    }else {
        return xerase(string, size-1);
    }
}