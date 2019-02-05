//
// Created by gyuri on 2019.02.05..
//


#ifndef GREENFOX_PERSON_H
#define GREENFOX_PERSON_H

#include <iostream>

enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

class Person
{
public:
    Person();
    Person(std::string name, int age, Gender gender);
    virtual void introduce();
    virtual void getGoal();
    std::string genderTostring();
protected:
    std::string _name;
    Gender _gender;
    int _age;
};


#endif //GREENFOX_PERSON_H
