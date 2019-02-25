#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int isPrime(int num);

int main()
{
	// Create a program which asks for a number and stores it
	// Create a function which takes a number as a parameter
	// and returns 1 if the number is a prime number and 0 otherwise
	// (in this case 0 is not considered as a prime number)
	int number;
	printf("Gimme a positive whole number!!!\n");
	scanf("%d", &number);
	printf("%d", isPrime(number));
	return 0;
}

