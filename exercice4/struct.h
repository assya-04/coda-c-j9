#ifndef TESTS_STRUCT_H  
#define TESTS_STRUCT_H  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct s_char
{
	char * name;
	int strength;
	int intelligence;
	int wisdom;
	int agility;
	int endurance;
};

typedef struct s_char character;

#endif