//
// Created by gyuri on 2019.02.05..
//

#include "student.h"

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization)
    : Person(name, age, gender)
{
    _previousOrganization = previousOrganization;
    _skippedDays = 0;
}
Student::Student()
{
    _previousOrganization = "The School of Life";
    _skippedDays = 0;
}
void Student::introduce()
{
    std::cout << "Hi, I'm " << _name << ", a " << _age << " years old "
              << genderTostring() << " from " << _previousOrganization
              << " who skipped " << _skippedDays << " from the course already." << std::endl;
}
void Student::getGoal()
{
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}
