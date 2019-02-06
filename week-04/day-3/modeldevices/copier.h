//
// Created by gyuri on 2019.02.06..
//

#ifndef MODELDEVICES_COPIER_H
#define MODELDEVICES_COPIER_H


#include "scanner.h"
#include "printer2D.h"

class Copier : public Scanner, public Printer2D
{
public:
    Copier(int sizeX, int sizeY, int speed);
    void copy();
};

#endif //MODELDEVICES_COPIER_H
