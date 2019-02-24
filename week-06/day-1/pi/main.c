#include <stdio.h>
#include <stdlib.h>
#include "pihead.h"

int main()
{
	float radius;
	printf("gimme the radius!!! ");
	scanf("%f", &radius);
	printf("the area of this circle is %.3f\n", CIRCLEAREA(radius));
	printf("the perimeter of it is %.3f", CIRCLEPERI(radius));
	return 0;
}
