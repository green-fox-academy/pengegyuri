#include <stdio.h>

int main()
{

	char * firstname;
	firstname = "Gyuri";
	char * lastname;
	lastname = "Kardos";
	int age = 38;
	float height = 1.75;
	printf("My name is %s %s .\n", firstname, lastname);
	printf("I am %d years old and %.2f m.\n", age, height);
	return 0;
}