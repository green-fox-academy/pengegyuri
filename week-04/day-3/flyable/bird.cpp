//
// Created by gyuri on 2019.02.06..
//

#include "bird.h"
#include <iostream>

Bird::Bird(std::string name, int age) : Animal(name, age)
{

}
void Bird::land()
{
    std::cout << "landed" << std::endl;
}
void Bird::fly()
{
    std::cout << "bird flies" << std::endl;
}
void Bird::takeOff()
{
    std::cout << "take off" << std::endl;
}
std::string Bird::getName()
{
    return _name;
}
void Bird::breed(){}