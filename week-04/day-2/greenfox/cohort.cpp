//
// Created by gyuri on 2019.02.05..
//

#include "cohort.h"


Cohort::Cohort(std::string name)
{
    _name = name;
    students = {};
    mentors = {};
}
void Cohort::addStudent(Student* student)
{
    students.push_back(student);
}
void Cohort::addMentor(Mentor* mentor)
{
    mentors.push_back(mentor);
}
void Cohort::info()
{

}