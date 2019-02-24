#include<stdio.h>

int main()
{
	int x = 13;
	int y =22;
	int add = x + y;
	int sub = y - x;
	int mult = x * y;
	int div = y / x;
	float div2 = (float)y / x;
	int rem = y % x;

	printf("result of 13 added to 22: %d\n", add);
	printf("result of 13 substracted from 22: %d\n", sub);
	printf("result of 22 multiplied by 13: %d\n", mult);
	printf("result of 22 divided by 13 (as a decimal fraction): %d\n", div);
	printf("reminder of 22 divided by 13: %d\n", rem);
	printf("result of 22 divided by 13: %f\n", div2);
	return 0;
}