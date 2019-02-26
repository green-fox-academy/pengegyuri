//
// Created by gyuri on 2019.02.26..
//

#include "struckt.h"

#ifndef HOUSE_FUNCTIONS_H
#define HOUSE_FUNCTIONS_H

int woth_it(house_t* house)
{
	if (house->price / house->area < 400) {
		return 1;
	} else return 0;
}

int how_many_woth_it(house_t* houses, int number_of_h)
{
	int result = 0;
	for (int i = 0; i < number_of_h; ++i) {
		if (woth_it(&houses[i])) {
			result++;
		}
	}
	return result;
}
#endif //HOUSE_FUNCTIONS_H
