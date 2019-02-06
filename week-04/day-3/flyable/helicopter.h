//
// Created by gyuri on 2019.02.06..
//
/* Inherit Helicopter class from Vehicle and Flyable
        implement the functions of Flyable abstract class(they should print something on the console)
        */
#ifndef FLYABLE_HELICOPTER_H
#define FLYABLE_HELICOPTER_H

#include "flyable.h"
#include "vechicle.h"


class Helicopter : public Flyable, Vechicle
{
public:
    Helicopter(std::string name, int speed);
    void land() override;
    void fly() override;
    void takeOff() override;
    void move();
};


#endif //FLYABLE_HELICOPTER_H
