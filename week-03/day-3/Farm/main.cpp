#include <iostream>
#include "Animal.h"
#include "Farm.h"

int main( int argc, char* args[] ) {

    /*
    Reuse your Animal class
    Create a Farm class
        it has list of Animals
        it has slots which defines the number of free places for animals
        breed() -> creates a new animal if there's place for it
        slaughter() -> removes the least hungry animal
*/
    Farm ranch;
    Animal cat;
    Animal hound;
    Animal cow;
    Animal sheep;

    ranch.breed(cat);
    ranch.breed(hound);
    ranch.breed(cow);
    ranch.breed(sheep);
    ranch.slaughter();
    ranch.breed(sheep);

    return 0;
}