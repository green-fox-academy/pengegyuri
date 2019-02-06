//
// Created by gyuri on 2019.02.06..
//

#include "copier.h"
#include <iostream>

Copier::Copier(int sizeX, int sizeY, int speed) : Printer2D(sizeX, sizeY), Scanner(speed)
{

}

void Copier::copy()
{
    scan();
    std::cout << std::endl;
    print();
}
