//
// Created by gyuri on 2019.02.06..
//

#ifndef MODELDEVICES_PRINTER_H
#define MODELDEVICES_PRINTER_H

#include <string>

/*Printer(abstract)
getSize() pure virtual function
print() function that writes "I'm printing something that's getSize() cm."
*/
class Printer
{
public:
    Printer(int sizeX, int sizeY);
    virtual std::string getSize() = 0;
    virtual void print();

protected:
    int _sizeX;
    int _sizeY;
};


#endif //MODELDEVICES_PRINTER_H
