#include <iostream>

#include "Fleet.h"

int main(int argc, char* args[])
{
    Fleet fleet;
    // Create a fleet of things to have this output:
    // 1. [ ] Get milk
    // 2. [ ] Remove the obstacles
    // 3. [x] Stand up
    // 4. [x] Eat lunch
    Things obj1("Get Milk");
    Things obj2("Remove the obstacles");
    Things obj3("Stand up");
    obj3.complete();
    Things obj4("Eat lunch");
    obj4.complete();

    fleet.add(obj1);
    fleet.add(obj2);
    fleet.add(obj3);
    fleet.add(obj4);

    std::cout << fleet.toString() << std::endl;
    return 0;
}