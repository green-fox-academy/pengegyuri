//
// Created by gyuri on 2019.01.30..
//
#include <iostream>
#include "Pirates.h"

Pirates::Pirates () {
    howMuchDrunken = 0;
    alive = true;
}
void Pirates::drinkSomeRum() {
    howMuchDrunken++
}
void Pirates::howsItGoingMate() {
    if (howMuchDrunken < 5) {
           std::cout << "Pour me anudder!" << std::endl;
    } else {
        std::cout << "Arghh, I'ma Pirate. How d'ya d'ink its goin?" << std::endl;
        howMuchDrunken = 0;
    }
}
