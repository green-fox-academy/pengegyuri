//
// Created by gyuri on 2019.01.30..
//

#include "Ship.h"
#include <Pirates.h>
#include <random>
#include <time.h>

Ship::Ship() {

}
void Ship::fillShip() {
    int crewNum;
    srand (time(NULL));
    crewNum = 1 + rand() % 35;
    Pirates crew[crewNum];
}