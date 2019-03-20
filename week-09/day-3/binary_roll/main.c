#include <stdio.h>
#include <string.h>
#include "fileread.h"

int main()
{
	char* text;
	text = file_read("../input.txt");
	printf("%s", text);
	free(text);
	return 0;
}