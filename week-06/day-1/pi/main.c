#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI
float circlearea(float rad);

int main()
{
	float radius;
	printf("gimme the radius!!! ");
	scanf("%f", &radius);
	printf("the area of this circle is %.3f", circlearea(radius));
	return 0;
}

float circlearea(float rad)
{
	return rad * rad * PI;
}