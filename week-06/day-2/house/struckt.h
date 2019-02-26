//
// Created by gyuri on 2019.02.26..
//
//- The address of the house
//- The price in EUR
//- The number of rooms
//- The area of the house in square meters

#ifndef HOUSE_STRUCKT_H
#define HOUSE_STRUCKT_H

typedef struct house
{
	char address[50];
	int price;
	int num_rooms;
	int area;
} house_t;
#endif //HOUSE_STRUCKT_H
