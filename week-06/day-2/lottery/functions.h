//
// Created by gyuri on 2019.02.26..
//
#include <stdio.h>
#include <string.h>

#ifndef LOTTERY_FUNCTIONS_H
#define LOTTERY_FUNCTIONS_H

typedef struct file_data
{
	int number_of_lines;
	int number_of_delim;
}filedata_t;

int makeworkingfile(char* filename)
{
	FILE* f_poiter_r;
	char line[110] = "";
	f_poiter_r = fopen(filename, "r");
	FILE* f_poiter_w;
	f_poiter_w = fopen("../working_file.csv", "w");
	int number_of_lines = 0;
	char temp[110];
	while (fscanf(f_poiter_r,"%*[^;];%*[^;];%*[^;];%*[^;];%*[^;];%*[^;];%*[^;];%*[^;];%*[^;];%*[^;]"
	                          ";%*[^;];%s", temp) != 0) {
		number_of_lines++;
		fprintf(f_poiter_w, "%s\n", temp);
	}
	fclose(f_poiter_r);
	fclose(f_poiter_w);
	char arr[number_of_lines];
	return number_of_lines;
}



#endif //LOTTERY_FUNCTIONS_H
