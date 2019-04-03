//
// Created by gyuri on 2019.03.20..
//

#ifndef CAR_REG_CARS_H
#define CAR_REG_CARS_H

typedef enum transmission
{
	AUTOMATIC,
	SEMIAUTOMATIC,
	DUACLUTCH,
	CVT,
	MANUAL

} transmission_t;

typedef struct
{
	char man_name[256];
	float price;
	int man_year;
	transmission_t trans;

} car_t ;

int get_cars_older_than(car_t* cars, int array_length, int age);
int get_transmission_count(car_t* cars, int array_length, transmission_t transmission);

#endif //CAR_REG_CARS_H
/*You should store the following data in a structure called car_t:

the manufacturer's name (which is shorter than 256 characters)
the price of the car (in euros, stored as a floating point number)
the year of manufacture
the type of the transmission (as a custom type, see below)

You should store the transmission type in an enumeration (transmission_t), the valid types are:

manual
		automatic
CVT
		semi-automatic
		dual-clutch

		The cars are stored in an array.

Write the following functions:

get_cars_older_than(car_t* cars, int array_length, int age)
it returns the number of cars that are older than age
get_transmission_count(car_t* cars, int array_length, transmission_t transmission)
it returns the count of cars which have the transmission passed as a parameter
*/