//
// Created by gyuri on 2019.02.05..
//

#ifndef GREENFOX_MENTOR_H
#define GREENFOX_MENTOR_H


#include "person.h"

enum Level
{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person
{
public:
    Mentor(std::string name, int age, Gender gender, Level level);
    Mentor();
    void introduce() override;
    void getGoal() override;
    std::string levelTostring();
private:
    Level  _level;
};


#endif //GREENFOX_MENTOR_H
