//
// Created by gyuri on 2019.02.07..
//

#include "isanagram.h"
#include <iostream>

Isanagram::Isanagram(std::string string1, std::string string2)
{
    _string1 = string1;
    _string2 = string2;
}

bool Isanagram::isAnagram(std::string string1, std::string string2)
{
    if (string1.size() == string2.size()) {
        for (int i = 0; i < _string1.size(); i++) {
            unsigned int j = 0;
            while (_string2.find(_string1[i], j) != _string2.npos) {

            }
        }
    }else return false;
}
