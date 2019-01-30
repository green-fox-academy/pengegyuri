//
// Created by gyuri on 2019.01.30..
//

#ifndef PETROLSTATION_STATION_H
#define PETROLSTATION_STATION_H

#include "Car.h"

class Station {
    public:
        void fill(Car&);
        Station ();

    private:
        int gasAmount;
};


#endif //PETROLSTATION_STATION_H
