//
// Created by gyuri on 2019.03.04..
//

#include <string.h>
#include <stdlib.h>
#include "poker_lib.h"


int is_higher(int card1value, int card2value)
{
	return card1value>card2value;
}

int card_value(char *card)
{
	char figures[] = "TJQKA";
	if (atoi(&card[0])) {
		return atoi(&card[0]);
	} else {
		for (int i = 0; i < 5; ++i) {
			if (figures[i] == card[0]) {
				return 10 + i;
			}
		}
	} return 0;
}

int highest_inhand(char hand[5][3])
{
	int highest = 0;
	for (int i = 0; i < 5; ++i) {
		if (card_value(hand[i]) > highest) {
			highest = card_value(hand[i]);
		}
	}
	return highest;
}

int stronger_hand(char white_hand[5][3], char black_hand[5][3])
{
	return highest_inhand(white_hand) > highest_inhand(black_hand) ? 1 : 0;
}
