#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// lists all position where character 'i' is found

int main ()
{
	char string[55] = "This is a string for testing";
	int index = 0;
	for (char *p = string; *p != '\0'; ++p) {
		index++;
		if (*p == 'i') {
			printf("%d\n", index);
		}
	}
	return 0;
}