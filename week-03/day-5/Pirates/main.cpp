#include <iostream>
#include "Ship.h"
int main()
{
    srand(time(NULL));

    Ship BlachPearl;
    BlachPearl.fillShip();
    //std::cout << BlachPearl.captain().getAlive() << std::endl;
    //std::cout << BlachPearl.captain().getHowMuchDrunken() << std::endl;
    BlachPearl.crewMember(3).brawl(BlachPearl.crewMember(4));
    std::cout << BlachPearl.crewMember(3).getAlive() << std::endl;
    std::cout << BlachPearl.crewMember(4).getAlive() << std::endl;
    std::cout << BlachPearl.crewMember(3).getPassedout() << std::endl;
    std::cout << BlachPearl.crewMember(4).getPassedout() << std::endl;
    return 0;
}