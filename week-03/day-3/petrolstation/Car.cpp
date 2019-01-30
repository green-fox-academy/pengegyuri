//
// Created by gyuri on 2019.01.30..
//

#include "Car.h"


Car::Car(int gA, int c) {
    gasAmount = gA;
    capacity = c;
}
bool Car::isFull() {
    return capacity == gasAmount;
}
void Car::fill() {
    gasAmount++;
}