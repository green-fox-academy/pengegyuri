//
// Created by gyuri on 2019.02.05..
//


#include "mentor.h"

Mentor::Mentor(std::string name, int age, Gender gender, Level level)
    :Person(name, age, gender)
{
    _level = level;
}
Mentor::Mentor()
{
    _level = INTERMEDIATE;
}
void Mentor::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " years old "
              << genderTostring() << " " << levelTostring() << " mentor." << std::endl;
}

std::string Mentor::levelTostring() {
    if (_level == JUNIOR) {
        return "junior";
    } else if (_level == INTERMEDIATE) {
        return "intermediate";
    } else {
        return "senior";
    }
}

void Mentor::getGoal()
    {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

