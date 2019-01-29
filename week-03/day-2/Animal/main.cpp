#include <iostream>
#include "Animal.h"

int main() {

/*    Create an Animal class

    Every animal has a hunger value, which is a whole number
    Every animal has a thirst value, which is a whole number
    when creating a new animal object these values are created with the default 50 value
    Every animal can eat() which decreases their hunger by one
    Every animal can drink() which decreases their thirst by one
    Every animal can play() which increases both by one
*/
    Animal cat;
    std::cout << cat.geThirst() << " " << cat.getHunger() << std::endl;
    cat.eat();
    std::cout << cat.geThirst() << " " << cat.getHunger() << std::endl;
    cat.drink();
    std::cout << cat.geThirst() << " " << cat.getHunger() << std::endl;
    cat.play();
    std::cout << cat.geThirst() << " " << cat.getHunger() << std::endl;
    cat.setHunger(20);
    cat.setThirst(32);
    std::cout << cat.geThirst() << " " << cat.getHunger() << std::endl;

    return 0;
}