/*We start with a base, abstract class Instrument.

it reserves (e.g. protected) the name of the instrument
        it should provide a play() pure virtual function.

Next, we add another abstract class, StringedInstrument which inherits from Instrument. It

        introduces numberOfStrings and
sound() pure virtual function what's implementation is yet unknown
but with the help of the sound() the play() method is fully implementable

StringedInstrument has 3 descendants, namely:-

Electric Guitar (6 strings, "Twang")
Bass Guitar (4 strings, "Duum-duum-duum")
Violin (4 strings, "Screech")
*/

#include <iostream>
#include "instrument.h"
#include "strininstrument.h"
#include "violin.h"

int main( int argc, char* args[] ) {
    std::cout << "Test 1, create Electric Guitar, Bass Guitar and Violin with default strings." << std::endl;

    Violin violin('v');

    std::cout << "Test 1 Play" << std::endl;

    violin.play();

    return 0;
}