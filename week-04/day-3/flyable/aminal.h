//
// Created by gyuri on 2019.02.06..
//


#ifndef FLYABLE_AMINAL_H
#define FLYABLE_AMINAL_H


#include <string>

class Animal
{
public:
    Animal(std::string name, int age);
    virtual std::string getName() = 0;
    virtual void breed() = 0;
protected:
    std::string _name;
    int _age;
};

#endif //FLYABLE_AMINAL_H
