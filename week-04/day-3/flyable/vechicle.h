//
// Created by gyuri on 2019.02.06..
//

#ifndef FLYABLE_VECHICLE_H
#define FLYABLE_VECHICLE_H


#include <string>

class Vechicle
{
public:
    Vechicle(std::string name, int speed);
    virtual void move() = 0;
protected:
    int _speed;
    std::string _name;
};


#endif //FLYABLE_VECHICLE_H
