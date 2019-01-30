//
// Created by gyuri on 2019.01.30..
//
#include <iostream>
#include "Pirates.h"

Pirates::Pirates ()
{
    howMuchDrunken = 0;
    alive = true;
    passedOut = false;
}
void Pirates::drinkSomeRum()
{
    howMuchDrunken++;
}
void Pirates::howsItGoingMate()
{
    if (howMuchDrunken < 5) {
           std::cout << "Pour me anudder!" << std::endl;
    } else {
        std::cout << "Arghh, I'ma Pirate. How d'ya d'ink its goin?" << std::endl;
        passedOut = true;
    }
}
void Pirates::die()
{
    alive = false;
}
bool Pirates::getAlive()
{
    return alive;
}
bool Pirates::getPassedout()
{
    return passedOut;
}
/*int Pirates::getHowMuchDrunken()
{
return howMuchDrunken;
}*/