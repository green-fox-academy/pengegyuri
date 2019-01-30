#include <iostream>
#include "Car.h"
#include "Station.h"

int main( int argc, char* args[] ) {



/*    Create Station and Car classes

    Station
    Members:
    gasAmount
    create a constructor that initializes the gasAmount
    fill(car) -> fills 1 unit of gas until the car is on full. Every time it transfers 1 unit it should print "Filling car!" on the console. When the car is full it should print the remaining gas amount of the station

    Car
    Members:
    gasAmount
    capacity
    create constructor for Car with 2 arguments(gasAmount and capacity)
    car has 2 methods:
    isFull() -> returns true if capacity equals to gasAmount, false otherwise
    fill() -> increments the gasAmount by one.

            In the main function create a station and 5 cars with different amount of capacity and gas. Refill all the cars.
*/
    Station mol;
    Car skoda(21, 40);
    Car lada(2, 40);
    Car zil(67, 200);
    Car merdzso(45, 50);
    Car lanrover(67, 70);

    mol.fill(lanrover);
    mol.fill(skoda);
    mol.fill(merdzso);
    mol.fill(zil);
    mol.fill(lada);



    return 0;
}