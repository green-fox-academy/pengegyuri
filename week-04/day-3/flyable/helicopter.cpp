//
// Created by gyuri on 2019.02.06..
//

#include "helicopter.h"
#include <iostream>
#include "vechicle.h"
#include "flyable.h"

Helicopter::Helicopter(std::string name, int speed) : Vechicle(name, speed)
{

}
void Helicopter::land()
{
    std::cout << "landed" << std::endl;
}
void Helicopter::fly()
{
    std::cout << "heli flies" << std::endl;
}
void Helicopter::takeOff()
{
    std::cout << "take off" << std::endl;
}
void Helicopter::move()
{
    fly();
}
