/*
We need to model several devices. The class diagram should look like this: Devices

        Scanner
class member:
        _speed: int
        constructor that gets an integer and assigns speed with it
scan() function which prints: "I'm scanning a document speed() ppm" to the console
Printer(abstract)
getSize() pure virtual function
print() function that writes "I'm printing something that's getSize() cm."
Printer2D
class member:
        _sizeX: int
        _sizeY: int
        constructor that gets 2 integers and assigns sizeX and sizeY with it
override getSize() function that returns a string which looks like: "_sizeX + X + _sizeY";
Printer3D
class member:
        _sizeX: int
        _sizeY: int
        _sizeZ: int
        constructor that gets 3 integers and assigns sizeZ, sizeY and sizeZ with it.
override getSize() function that returns a string which looks like: "_sizeX + X + _sizeY + X + _sizeZ"
Copier
        constructor that gets 3 integers and assigns sizeX, sizeY and speed with it.
copy() function that prints the following to the console: "scan() + and + print()".
*/

#include <iostream>
#include "printer.h"
#include "printer2D.h"
#include "scanner.h"
#include "copier.h"
#include "printer3D.h"

int main() {

   Copier c(21, 31, 210);
   c.copy();
    return 0;
}