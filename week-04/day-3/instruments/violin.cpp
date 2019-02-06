//
// Created by gyuri on 2019.02.06..
//

#include "violin.h"

Violin::Violin(std::string name, int numberOfStrings)
    : StringedInstrument(name, numberOfStrings)
{
    _numberOfStrings = 4;
}


std::string Violin::sound()
{
    return "Screech";
}