//
// Created by gyuri on 2019.01.29..
//

#include "Things.h"

Things::Things(const std::string& name)
{
    _name = name;
    _completed = false;
}

void Things::complete()
{
    _completed = true;
}

std::string Things::toString()
{
    return (_completed ? "[x] " : "[ ] ") + _name;
}