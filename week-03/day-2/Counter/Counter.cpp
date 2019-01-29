//
// Created by gyuri on 2019.01.29..
//

#include "Counter.h"


Counter::Counter(int iV) {
    initialValue = iV;
    result = iV;
}
Counter::Counter() {
    initialValue = 0;
}
void Counter::add(int x) {
    result = result + x;
}
int Counter::get() {
    return result;
}
void Counter::reset() {
    result = initialValue;
}