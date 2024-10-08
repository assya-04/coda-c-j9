#ifndef TESTS_STRUCT_H  
#define TESTS_STRUCT_H  
#include <stdio.h>
#include <stdlib.h>

struct s_char
{
	int strength;
	int intelligence;
	int wisdom;
	int agility;
	int endurance;
};
typedef struct s_char character;

#endif