//
// Created by gyuri on 2019.02.06..
//

#include "printer.h"
#include <iostream>

Printer::Printer(int sizeX, int sizeY)
{
    _sizeX = sizeX;
    _sizeY = sizeY;
}
void Printer::print()
{
    std::cout << "I'm printing something that's " <<  getSize() << " cm."<< std::endl;
}
