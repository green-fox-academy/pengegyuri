#include <stdio.h>
#include <string.h>
#include "struckt.h"
#include "functions.h"
/*
Create a struct that represents a House
It should store:
 - The address of the house
 - The price in EUR
 - The number of rooms
 - The area of the house in square meters
The market price of the houses is 400 EUR / square meters
Create a function that takes a pointer to a house and decides if it's worth to buy
(if the price is lower than the calculated price from it's area)
Create a function that takes an array of houses (and it's length), and counts the
houses that are worth to buy.
*/

int main()
{
	house_t house1;
	house_t house2;
	house_t house3;
	strcpy(house1.address,"Erkel street 5.");
	house1.area = 120;
	house1.num_rooms = 3;
	house1.price = 56000;
	strcpy(house2.address,"Erkel street 5.");
	house2.area = 120;
	house2.num_rooms = 3;
	house2.price = 42000;
	strcpy(house3.address,"Erkel street 5.");
	house3.area = 250;
	house3.num_rooms = 3;
	house3.price = 56000;
	house_t houses[3] = {house1, house2, house3};
	printf("%d", how_many_woth_it(houses, sizeof(houses) / sizeof(house1)));
  return 0;
}