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
void Pirates::knockOut()
{
    passedOut = true;
}
bool Pirates::getAlive()
{
    return alive;
}
bool Pirates::getPassedout()
{
    return passedOut;
}
void Pirates::brawl(Pirates& anotherPirate)
{
    int chance = rand() % 3;
    if (alive && anotherPirate.getAlive() && !passedOut && !anotherPirate.getPassedout())
    {
        if (chance == 0)
        {
            passedOut = true;
            anotherPirate.knockOut();
        } else if (chance == 1) {
            alive = false;
        } else {
            anotherPirate.die();
        }
    } else if (!alive) {
        std::cout << "A dead man can't fight." << std::endl;
    } else if (!anotherPirate.getAlive()) {
        std::cout << "You can't fight with a dead man." << std::endl;
    } else if (passedOut) {
        std::cout << "Don't be ridicoulos!" << std::endl;
    } else {
        std::cout << "Shame on you." << std::endl;
    }
}
int Pirates::getHowMuchDrunken()
{
return howMuchDrunken;
}