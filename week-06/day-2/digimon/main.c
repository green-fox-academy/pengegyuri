#include <stdio.h>
#include <string.h>
#include "struckt.h"
#include "functions.h"


int main()
{
	digimon_t digimon1;
	strcpy(digimon1.name, "alfa");
	digimon1.digivol = baby;
	digimon1.hp = 10;
	digimon1.age = 2;
	strcpy(digimon1.name_tamer, "Bela");

	digimon_t digimon2;
	strcpy(digimon2.name, "alfa");
	digimon2.digivol = mega;
	digimon2.hp = 12;
	digimon2.age = 2;
	strcpy(digimon2.name_tamer, "Geza");

	digimon_t digimon3;
	strcpy(digimon3.name, "alfa");
	digimon3.digivol = baby;
	digimon3.hp = 11;
	digimon3.age = 2;
	strcpy(digimon3.name_tamer, "Bela");

	digimon_t digimons[] = {digimon1, digimon2, digimon3};

	printf("%d\n",minimal_health(digimons, sizeof(digimons)/ sizeof(digimon1)));
	printf("%d\n",same_tamercount(digimons, sizeof(digimons)/ sizeof(digimon1), "Bela"));
	printf("%d\n",same_tameraveragehealth(digimons, sizeof(digimons)/ sizeof(digimon1), "Bela"));
	return 0;
}