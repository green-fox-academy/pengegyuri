//
// Created by gyuri on 2019.02.25..
//
#include <stdlib.h>
#ifndef SUMOFDIGITS_HEAD_H
#define SUMOFDIGITS_HEAD_H
int compareSumofdigits(char* a, char* b)
{
	int suma = 0;
	int sumb = 0;
	char temp;
	int i = 0;
	while(a[i]) {
		temp = a[i];
		suma += atoi(&temp);
		i++;
	}
	printf("%d\n", suma);
	i = 0;
	while(b[i]) {
		temp = b[i];
		sumb += atoi(&temp);
		i++;
	}
	printf("%d\n", sumb);
	return suma == sumb;
}

#endif //SUMOFDIGITS_HEAD_H
