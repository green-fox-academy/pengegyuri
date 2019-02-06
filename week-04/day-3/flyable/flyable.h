//
// Created by gyuri on 2019.02.06..
//
/*
Create a Flyable abstract class
        it should have land, fly and takeOff pure virtual functions
        Create an abstract Vehicle class
        it should have at least 3 members
        Inherit Helicopter class from Vehicle and Flyable
        implement the functions of Flyable abstract class(they should print something on the console)
        */
#ifndef FLYABLE_FLYABLE_H
#define FLYABLE_FLYABLE_H


class Flyable
{
public:
    Flyable();
    virtual void land() = 0;
    virtual void fly() = 0;
    virtual void takeOff() = 0;
};

#endif //FLYABLE_FLYABLE_H
