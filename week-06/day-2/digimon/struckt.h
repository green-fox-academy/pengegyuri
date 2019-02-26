
#ifndef DIGIMON_STRUCKT_H
#define DIGIMON_STRUCKT_H

typedef enum
{
	baby,
	intraining,
	rookie,
	champion,
	ultimate,
	mega
}divol_t;

typedef struct digimon
{
	char name[128];
	int age;
	short int hp;
	char name_tamer[256];
	divol_t digivol;
}digimon_t;

#endif //DIGIMON_STRUCKT_H
