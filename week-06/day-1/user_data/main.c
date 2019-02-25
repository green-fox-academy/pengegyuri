#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create a program which asks for full name and age
// and stores it in a char array
// parse that array to first_name, last_name, age (use tokenizing)
// print out the the stored variables
// example:
//   printf("Your name is: %s %s and you are %d years old", first_name, last_name, age);

int main ()
{
	char data[100] = "";
	char input[20];
	char firstname[20];
	char lastname[20];
	int age;
	printf("Gimme your first name, last name and age!!!\n");
	for (int i = 0; i < 3; ++i) {
		fgets(input, sizeof(input), stdin);
		strcat(data, input);
	}
	strcpy(firstname, strtok(data, " ,\n"));
	strcpy(lastname, strtok(NULL, " ,\n"));
	age = atoi(strtok(NULL, " ,"));
	printf("%s %s is %d years old.", firstname, lastname, age);
    return 0;
}