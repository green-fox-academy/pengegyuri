//
// Created by gyuri on 2019.01.29..
//

#include "Fleet.h"

Fleet::Fleet() {}

void Fleet::add(const Things& thing)
{
    things.push_back(thing);
}

std::string Fleet::toString()
{
    std::string result = "";
    for(int i = 0; i < things.size(); i++) {
        result += std::to_string(i+1) + ". " + things.at(i).toString() + "\n";
    }
    return result;
}