//
// Created by gyuri on 2019.02.06..
//

#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include <string>
#include "strininstrument.h"

class Violin : public StringedInstrument
{

public:
    Violin(std::string name, int numberOfStrings);
    std::string sound() override;
};


#endif //INSTRUMENTS_VIOLIN_H
