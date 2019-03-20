//
// Created by gyuri on 2019.03.20..
//

#include "fileread.h"

char* file_read(char* filename)
{
	char temp[20] = "";
	char* text;
	char number;
	int text_capacity = 255;
	text = (char*)calloc(text_capacity, sizeof(char));
	FILE* f_pointer_r;
	f_pointer_r = fopen(filename, "r");
	while(fscanf(f_pointer_r,"%s", temp) != EOF) {
		number = strtol(temp, NULL, 2);
		strncat(text, &number, 1);
		if (strlen(text) == text_capacity-1) {
			text_capacity += text_capacity;
			text = (char*) realloc(text, text_capacity * sizeof(char));
		}
	}
	fclose(f_pointer_r);
	return text;
}
