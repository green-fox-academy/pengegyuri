//
// Created by gyuri on 2019.02.05..
//

#ifndef GREENFOX_STUDENT_H
#define GREENFOX_STUDENT_H


#include "person.h"

class Student : public Person
{
public:
    Student(std::string name, int age, Gender gender, std::string previousOrganization);
    Student();
    void introduce() override;
    void getGoal() override;
private:
    std:: string _previousOrganization;
    int _skippedDays;

};


#endif //GREENFOX_STUDENT_H
