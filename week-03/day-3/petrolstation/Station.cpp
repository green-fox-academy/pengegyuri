//
// Created by gyuri on 2019.01.30..
//
#include <iostream>
#include "Station.h"
#include "Car.h"

Station::Station() {
    gasAmount = 2500;
}
void Station::fill(Car& car) {
    while (!car.isFull()) {
        car.fill();
        gasAmount--;
        std::cout << "Filling car!" << std::endl;
    }
    std::cout << "Remaining gas amount of the station: " << gasAmount << std::endl;
}