//
// Created by gyuri on 2019.02.06..
//
/*Next, we add another abstract class, StringedInstrument which inherits from Instrument. It

        introduces numberOfStrings and
sound() pure virtual function what's implementation is yet unknown
but with the help of the sound() the play() method is fully implementable
*/
#ifndef INSTRUMENTS_STRININSTRUMENT_H
#define INSTRUMENTS_STRININSTRUMENT_H


class StringedInstrument : public Instrument
{
public:
    StringedInstrument(std::string name, int numberOfStrings);
    void play() override;
    virtual std::string sound();
protected:
    int _numberOfStrings;
};


#endif //INSTRUMENTS_STRININSTRUMENT_H
