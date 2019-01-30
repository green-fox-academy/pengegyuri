//
// Created by gyuri on 2019.01.30..
//
#include <iostream>
#include "Farm.h"
#include "Animal.h"
#include <vector>

Farm::Farm() {
    slots = 3;
}
void Farm::breed(Animal animal) {
    if (listOfAnimals.size() < slots) {
        listOfAnimals.push_back(animal);
    } else {
        std::cout << "There is no room for another animal" << std::endl;
    }
}
void Farm::slaughter() {
    int leasthungry = 0;
    int indexofleasthungry =0;
    for (int i = 0; i < listOfAnimals.size(); i++) {
        if (listOfAnimals[i].getHunger() < leasthungry) {
            leasthungry = listOfAnimals[i].getHunger();
            indexofleasthungry = i;
        }
    }
    listOfAnimals.erase(listOfAnimals.begin() + indexofleasthungry);
}