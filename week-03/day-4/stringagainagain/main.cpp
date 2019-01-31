#include <iostream>
#include <string>

// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a '*'.


std::string starinserter(std::string string, int size);

int main()
{
    std::string blabla = "hfgfjxhjgfjhgxbhu";
    std::cout << starinserter(blabla, blabla.size());
    return 0;
}

std::string starinserter(std::string string, int size)
{
    int x = size - 1;
    if (x == 0)
    {
        return string;
    }else {
        string.insert(string.begin() + x , '*');
        return starinserter(string, size-1);
    }
}