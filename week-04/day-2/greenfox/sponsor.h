//
// Created by gyuri on 2019.02.05..
//
#ifndef GREENFOX_SPONSOR_H
#define GREENFOX_SPONSOR_H


#include "person.h"

class Sponsor : public Person
{
public:
    Sponsor();
    Sponsor(std::string name, int age, Gender gender, std::string company);
    void introduce() override;
    void getGoal() override;
    void hire();
private:
    std::string _company;
    int _hiredStudents;
};


#endif //GREENFOX_SPONSOR_H
