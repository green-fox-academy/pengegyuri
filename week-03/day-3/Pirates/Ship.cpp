//
// Created by gyuri on 2019.01.30..
//

#include "Ship.h"
#include "Pirates.h"
#include <random>
#include <time.h>
#include <iostream>
#include <vector>

Ship::Ship() {

}
std::vector<Pirates> Ship::fillShip()
{
    int crewNum;
    srand (time(NULL));
    crewNum = 1 + rand() % 35;
    for (int i = 0; i < crewNum; i++) {
        crew.push_back(Pirates());
    }
    return crew;
}
Pirates Ship::crewMember(int crewIndex)
{
    return crew[crewIndex];
}