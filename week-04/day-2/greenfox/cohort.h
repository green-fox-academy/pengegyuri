//
// Created by gyuri on 2019.02.05..
//
/*
Create a Cohort class that has the following

members:
name: the name of the cohort
        students: a vector of Students
mentors: a vector of Mentors
functions:
addStudent(Student*): adds the given Student to students vector
addMentor(Mentor*): adds the given Mentor to mentors vector
info(): prints out "The name cohort has students.size() students and mentors.size() mentors."

The Cohort class has the following constructors:

Cohort(name): beside the given parameter, it sets students and mentors as empty lists
*/

#ifndef GREENFOX_COHORT_H
#define GREENFOX_COHORT_H


#include <string>
#include <vector>
#include "student.h"
#include "mentor.h"

class Cohort
{
public:
    Cohort(std::string name);
    void addStudent(Student* student);
    void addMentor(Mentor* mentor);
    void info();
private:
    std::string _name;
    std::vector<Student*> students;
    std::vector<Mentor*> mentors;
};


#endif //GREENFOX_COHORT_H
