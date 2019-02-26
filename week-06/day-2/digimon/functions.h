//
// Created by gyuri on 2019.02.26..
//

#ifndef DIGIMON_FUNCTIONS_H
#define DIGIMON_FUNCTIONS_H

int minimal_health(digimon_t* digimons, int num_digimons)
{
	int i_min = 0;
	int minhp = digimons[0].hp;
	for (int i = 1; i < num_digimons; ++i) {
		if (digimons[i].hp < minhp) {
			minhp = digimons[i].hp;
			i_min = i;
		}
	}
	return i_min;
}

int same_digivolution(digimon_t* digimons, int num_digimons, divol_t divol)
{
	 int num_samedivol = 0;
	 for (int i = 0; i < num_digimons; ++i) {
		 if (digimons[i].digivol = divol) {
			 num_samedivol++;
		 }
	 }
	 return num_samedivol;
}

int same_tamercount(digimon_t* digimons, int num_digimons, char* tamer)
{
	int num_sametamer = 0;
	for (int i = 0; i < num_digimons; ++i) {
		if (!strcmp(digimons[i].name_tamer, tamer)) {
			num_sametamer++;
		}
	}
	return num_sametamer;
}

int same_tameraveragehealth(digimon_t* digimons, int num_digimons, char* tamer)
{
	int num_sametamer = 0;
	int sum_health = 0;
	for (int i = 0; i < num_digimons; ++i) {
		if (!strcmp(digimons[i].name_tamer, tamer)) {
			num_sametamer++;
			sum_health += digimons[i].hp;
		}
	}
	return sum_health/num_sametamer;
}

#endif //DIGIMON_FUNCTIONS_H
