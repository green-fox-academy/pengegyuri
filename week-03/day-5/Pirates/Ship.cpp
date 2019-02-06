//
// Created by gyuri on 2019.01.30..
//

#include "Ship.h"
#include "Pirates.h"
#include <random>
#include <time.h>
#include <iostream>
#include <vector>

Ship::Ship() {}

std::vector<Pirates> Ship::fillShip()
{
    int crewnum;
    crewnum = 1 + rand() % 35;
    for (int i = 0; i < crewnum; i++) {
        crew.push_back(Pirates());
    }
    return crew;
}
Pirates& Ship::crewMember(int crewIndex)
{
    return crew[crewIndex];
}
Pirates& Ship::captain()
{
    return crew[0];
}
void Ship::stateOfcaptain()
{
    if (!crew[0].getAlive())
    {
        std::cout << "The captain is dead." << std::endl;
    } else if (crew[0].getPassedout())
    {
        std::cout << "The captain is almost dead drunken." << std::endl;
    } else if (crew[0].getHowMuchDrunken() == 0)
    {
            std::cout << "The captain is totally sober" << std::endl;
    } else {
        std::cout << "The captain is almost sober, he has had only " << crew[0].getHowMuchDrunken() << "shots." << std::endl;
    }
}
int Ship::getNumberofalive()
{
    int alive;
    for (int i = 0; i < crew.size(); i++) {
        if (crew[i].getAlive())
        {
            alive++;
        }
    }
    return alive;
}

