//
// Created by gyuri on 2019.01.30..
//

#ifndef FARM_FARM_H
#define FARM_FARM_H

#include "Animal.h"
#include <vector>

class Farm {
    public:
        Farm();
        void breed(Animal animal);
        void slaughter();

    private:
        int slots;
        std::vector<Animal> listOfAnimals;

};


#endif //FARM_FARM_H
