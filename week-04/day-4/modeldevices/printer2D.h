//
// Created by gyuri on 2019.02.06..
//

#ifndef MODELDEVICES_PRINTER2D_H
#define MODELDEVICES_PRINTER2D_H

#include "printer.h"

class Printer2D : public Printer
{
public:
    Printer2D(int sizeX, int sizeY);
    std::string getSize() override;
};


#endif //MODELDEVICES_PRINTER2D_H
