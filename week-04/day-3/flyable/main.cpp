/*
Create a Flyable abstract class
        it should have land, fly and takeOff pure virtual functions
        Create an abstract Vehicle class
        it should have at least 3 members
        Inherit Helicopter class from Vehicle and Flyable
        implement the functions of Flyable abstract class(they should print something on the console)
Inherit Bird from your abstract Animal class (zoo exercise) and Flyable
        implement the functions of Flyable abstract class
*/
#include "helicopter.h"
#include "vechicle.h"
#include "aminal.h"
#include "bird.h"
#include "flyable.h"
#include <iostream>
#include <vector>

int main()
{
    Helicopter h("apache", 720);
    Bird b("csorike", 3);
    std::vector<Flyable*> fl;
    fl.push_back(&h);
    fl.push_back(&b);
    std::cout << b.getName() << std::endl;
    fl[1]->fly();
    fl[0]->fly();
    return 0;
}