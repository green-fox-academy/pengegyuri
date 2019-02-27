#include <iostream>
#include <cstring>

int main()
{
	char test_text[] = "2015;42;2015.10.17.;1;1 786 189 915 Ft;88;747 435 Ft;6310;11 035 Ft;141579;955 Ft;2;5;17;24;72";
	char* temp;
	char numbers[20] = "";
	int index = 1;
	temp =strtok(test_text, ";");
	while(temp) {
		temp = strtok(NULL, ";");
		if (index > 10 && temp){
			strcat(numbers, temp);
			strcat(numbers, " ");
		}
		index++;
	}
	printf("%s\n",numbers);
	printf("%d\n",index);
	return 0;
}
//for (char* p = (test_text + sizeof(test_text)); p != test_text; p--)