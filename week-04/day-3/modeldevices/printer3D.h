//
// Created by gyuri on 2019.02.06..
//

#ifndef MODELDEVICES_PRINTER3D_H
#define MODELDEVICES_PRINTER3D_H

#include "printer.h"

class Printer3D : public Printer
{
public:
    Printer3D(int sizeX, int sizeY, int sizeZ);
    std::string getSize() override;
private:
    int _sizeZ;
};


#endif //MODELDEVICES_PRINTER3D_H
