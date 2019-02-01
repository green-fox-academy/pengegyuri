//
// Created by gyuri on 2019.01.30..
//
/*Create a Pirate class. While you can add other fields and methods, you must have these methods:-

    drinkSomeRum() - intoxicates the Pirate some
    howsItGoingMate() - when called, the Pirate replies, if drinkSomeRun was called:-
        0 to 4 times, "Pour me anudder!"
        else, "Arghh, I'ma Pirate. How d'ya d'ink its goin?", the pirate passes out and sleeps it off.

If you manage to get this far, then you can try to do the following.

    die() - this kills off the pirate, in which case, drinkSomeRum, etc. just result in he's dead.
    brawl(x) - where pirate fights another pirate (if that other pirate is alive) and there's a 1/3 chance, 1 dies, the other dies or they both pass out.
*/
#ifndef PIRATES_PIRATES_H
#define PIRATES_PIRATES_H


class Pirates
{
public:
    Pirates ();
    void drinkSomeRum();
    void howsItGoingMate();
    void die();
    void brawl(Pirates& pirate);
    bool getAlive();
    bool getPassedout();
    void knockOut();
    int getHowMuchDrunken();

private:
    int howMuchDrunken;
    bool alive;
    bool passedOut;
};


#endif //PIRATES_PIRATES_H
