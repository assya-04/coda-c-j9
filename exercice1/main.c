#include "struct.h"

int main()
{

	character ch;

	ch.strength;
	ch.intelligence;
	ch.wisdom;
	ch.agility;
	ch.endurance;

	printf("Saisir la force : \n");
	scanf("%d",&ch.strength);

	printf("Saisir l'intelligence : \n");
	scanf("%d",&ch.intelligence);

	printf("Saisir la sagesse : \n");
	scanf("%d",&ch.wisdom);

	printf("Saisir l'agilité : \n");
	scanf("%d",&ch.agility);

	printf("Saisir l'endurance : \n");
	scanf("%d",&ch.endurance);
	printf("\n");

	printf("Force :%d\n",ch.strength);
	printf("intelligence: %d\n",ch.intelligence);
	printf("Sagesse: %d\n",ch.wisdom);
	printf("Agilité: %d\n",ch.agility);
	printf("Endurance: %d\n",ch.endurance);



	return 0;
}