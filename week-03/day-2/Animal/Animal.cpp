//
// Created by gyuri on 2019.01.29..
//

#include "Animal.h"


Animal::Animal() {}

int Animal::getHunger() {
    return hunger;
    }
void Animal::setHunger(int H) {
    hunger = H;
    }
int Animal::geThirst() {
    return thirst;
    }
void Animal::setThirst(int T) {
    thirst = T;
    }
void Animal::eat(){
    hunger -= 1;
}
void Animal::drink(){
    thirst -= 1;
}
void Animal::play(){
    hunger += 1;
    thirst += 1;
}
