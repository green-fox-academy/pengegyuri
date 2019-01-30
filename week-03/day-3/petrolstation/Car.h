//
// Created by gyuri on 2019.01.30..
//

#ifndef PETROLSTATION_CAR_H
#define PETROLSTATION_CAR_H


class Car {
    public:
        Car (int, int);
        bool isFull();
        void fill();

    private:
        int gasAmount;
        int capacity;
};


#endif //PETROLSTATION_CAR_H
