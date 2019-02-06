//
// Created by gyuri on 2019.02.06..
//

#ifndef FLYABLE_BIRD_H
#define FLYABLE_BIRD_H

#include "flyable.h"
#include "aminal.h"


class Bird : public Flyable, Animal
{
public:
    Bird(std::string name, int age);
    void land() override;
    void fly() override;
    void takeOff() override;
    virtual std::string getName() override;
    virtual void breed() override;
};


#endif //FLYABLE_BIRD_H
