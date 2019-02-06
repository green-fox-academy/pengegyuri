//
// Created by gyuri on 2019.02.06..
//

#include "instrument.h"
#include "strininstrument.h"
#include <iostream>

StringedInstrument::StringedInstrument(std::string name, int numberOfStrings)
    : Instrument(name)
{
    _numberOfStrings = numberOfStrings;
}
void StringedInstrument::play()
{
    std::cout << sound() << std::endl;
}