//
// Created by gyuri on 2019.02.06..
//

#include "printer2D.h"
#include <iostream>

Printer2D::Printer2D(int sizeX, int sizeY) : Printer(sizeX, sizeY)
{

}
std::string Printer2D::getSize()
{
    return std::to_string(_sizeX) + " X " + std::to_string(_sizeY);
}
