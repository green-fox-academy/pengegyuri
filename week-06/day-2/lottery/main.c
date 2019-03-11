#include <stdio.h>
#include "functions.h"

// Create a method that find the 5 most common lottery numbers in lottery.csv

int main()
{

	//filedata = countfiledata(fpoiter);
	//int common_numbers[5][5];
	//int t[5] = {0,0,0,0,0};
	//char temp[100];

	//printf("%s", temp);
	//printf("%d %d %d %d %d\n", t[0], t[1], t[2], t[3], t[4]);
	//printf("%d", t[1]);%d;%d;%d;%d;%d&t[0], &t[1], &t[2], &t[3], &t[4]
	makeworkingfile("../lottery.csv");
	char arr[makeworkingfile("../lottery.csv")];

	return 0;
}