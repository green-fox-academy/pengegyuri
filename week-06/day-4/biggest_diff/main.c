#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// You will write a program that keeps track of exam results.
// First, your program should ask the user how many classes took the exam. Let's say this number is N.
// Then you need to ask how many students took the exam in the first class. Let's say this number is M.
// You need to ask for the name of the class, the the exam results in percentage M times and store them.
// The number of students might be different for each class.
// You need to repeat this N times.
// Make sure you have a separate function that reads the data and returns it.

// Once you have the data write functions for the following questions:
// Which class has the biggest difference between the worst and best exam and how much is the difference?
// Which class has the best exam?
// What is the average of all the exams?

typedef struct
{
	char name[50];
	int num_ofstudents;
	float* exams;
}class_t;

void createclasses(class_t* classes, int num_classes);
float average(class_t* classes, int num_classes);
char* bestexam(class_t* classes, int num_classes);
char* biggestdiff(class_t* classes, int num_classes);

int main()
{
	int num_classes;
	printf("Gimme number of classes!!!\n");
	scanf("%d", &num_classes);
	class_t* classes;
	classes = (class_t*)calloc(num_classes, sizeof(class_t));
	createclasses(classes, num_classes);
	printf("Average of exams: %.2f\n", average(classes, num_classes));
	printf("Best exam was in class: %s\n", bestexam(classes, num_classes));
	char* biggest = biggestdiff(classes, num_classes);
	printf("%s", biggest);
	for (int k = 0; k < num_classes; ++k) {
		free(classes[k].exams);
	}
	free(biggest);
	free(classes);

	return 0;
}

void createclasses(class_t* classes, int num_classes)
{
	for (int i = 0; i < num_classes; ++i) {
		printf("Gimme the name of %d. class: ", i + 1);
		scanf("%s", classes[i].name);
		printf("Gimme the number of students in %d. class: ", i + 1);
		scanf("%d", &classes[i].num_ofstudents);
		classes[i].exams = (float*)calloc(classes[i].num_ofstudents, sizeof(float));
		printf("Gimme the results of students in %d. class: \n", i + 1);
		for (int j = 0; j < classes[i].num_ofstudents; ++j) {
			scanf("%f", &classes[i].exams[j]);
		}
	}
}

float average(class_t* classes, int num_classes)
{
	int sumexams = 0;
	int sumstudents = 0;
	for (int i = 0; i < num_classes; ++i) {
		for (int j = 0; j < classes[i].num_ofstudents; ++j) {
			sumexams += classes[i].exams[j];
		}
		sumstudents += classes[i].num_ofstudents;
	}
	return sumexams/sumstudents;
}

char* bestexam(class_t* classes, int num_classes)
{
	float max = 0;
	int index = 0;
	for (int i = 0; i < num_classes; ++i) {
		for (int j = 0; j < classes[i].num_ofstudents; ++j) {
			if (classes[i].exams[j] > max) {
				max = classes[i].exams[j];
				index = i;
			}
		}
	}
	return classes[index].name;
}

char* biggestdiff(class_t* classes, int num_classes)
{
	float max_diff = 0;
	int index = 0;
	for (int i = 0; i < num_classes; ++i) {
		float max = 0;
		float min = 100;
		for (int j = 0; j < classes[i].num_ofstudents; ++j) {
			if (classes[i].exams[j] > max) {
				max = classes[i].exams[j];
			} else if (classes[i].exams[j] < min) {
				min = classes[i].exams[j];
			}
		}
		if (max - min > max_diff) {
			max_diff = max - min;
			index = i;
		}
	}
	char* result;
	result = (char*)calloc(255, sizeof(char));
	sprintf(result, "The biggest difference is %f between exam results "
				 "and it is in class %s.", max_diff, classes[index].name);

	return result;
}



