//
// Created by gyuri on 2019.01.29..
//

#ifndef FLEET_OF_THINGS_FLEET_H
#define FLEET_OF_THINGS_FLEET_H

#include <vector>
#include <string>

#include "Things.h"

class Fleet
{
public:
    Fleet();

    void add(const Things& thing);
    std::string toString();

private:
    std::vector<Things> things;
};


#endif //FLEET_OF_THINGS_FLEET_H