//
// Created by gyuri on 2019.02.05..
//

#include "person.h"


Person::Person(std::string name, int age, Gender gender)
{
    _name = name;
    _age = age;
    _gender = gender;
}
Person::Person()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = FEMALE;
}
std::string Person::genderTostring()
{
    if (_gender == MALE){
        return "male";
    } else if (_gender == FEMALE){
        return "female";
    } else {
        return "other";
    }
}
void Person::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " years old "
                << genderTostring() << "." << std::endl;
}
void Person::getGoal()
{
    std::cout << "My goal is: Live for the moment!" << std::endl;
}
