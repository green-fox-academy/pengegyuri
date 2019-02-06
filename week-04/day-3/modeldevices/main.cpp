

#include <iostream>
#include "printer.h"
#include "printer2D.h"
#include "scanner.h"
#include "copier.h"
#include "printer3D.h"
#include <vector>

int main() {
    // Create a vector that holds Printer* objects
    // Fill the vector with 3 Printer2D, 2 Printer3D and 1 copier.
    // Iterate through the vector and invoke print function on all of them.

    // Create a vector that holds Scanner* objects
    // Fill the vector with 2 Scanner and 2 Copier objects.
    // Iterate through the vector and invoke scan function on all of them

    // Create a Copier object and invoke copy function on it.
    std::vector<Printer*> printers;
    std::vector<Scanner*> scanners;

    Copier c(21, 31, 210);
    Printer2D p2(21, 40);
    Printer3D p3(43, 54, 65);
    Scanner s(340);

    printers.push_back(&c);
    printers.push_back(&p2);
    printers.push_back(&p3);
    scanners.push_back(&c);
    scanners.push_back(&s);
    for (int i = 0; i < scanners.size(); i++) {
        scanners[i]->scan();
    }
    c.copy();
    c.print();

    return 0;
}