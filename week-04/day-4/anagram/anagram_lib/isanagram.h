//
// Created by gyuri on 2019.02.07..
//

#ifndef ANAGRAM_ISANAGRAM_H
#define ANAGRAM_ISANAGRAM_H


#include <string>

class Isanagram
{
public:
    Isanagram(std::string string1, std::string string2);
    bool isAnagram(std::string string1, std::string string2);

private:
    std::string _string1;
    std::string _string2;

};


#endif //ANAGRAM_ISANAGRAM_H
