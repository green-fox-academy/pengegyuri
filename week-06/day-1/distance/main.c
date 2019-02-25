#include <stdio.h>
#include <string.h>

// create a function which takes a char array as a parameter and
// returns the distance between the first and last occurance of character 's'

int distance(char* string, char c);

int main ()
{
	char str[] = "This is a sample string";
	printf("%d\n", distance(str, 's'));
	return 0;
}

int distance(char* string, char c)
{
	return  (strrchr(string, c) - strchr(string, c)) - 1;
}