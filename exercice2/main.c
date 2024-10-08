#include "struct.h"

void fill_struct(character *perso)
{
	perso->strength;
	perso->intelligence;
	perso->wisdom;
	perso->agility;
	perso->endurance;
	printf("Saisir la force : \n");
	scanf("%d",&perso->strength);

	printf("Saisir l'intelligence : \n");
	scanf("%d",&perso->intelligence);

	printf("Saisir la sagesse : \n");
	scanf("%d",&perso->wisdom);

	printf("Saisir l'agilité : \n");
	scanf("%d",&perso->agility);

	printf("Saisir l'endurance : \n");
	scanf("%d",&perso->endurance);
	printf("\n");

}

int main ()
{
	character perso;
	fill_struct(&perso);

	printf("Force: %d\n",perso.strength);
	printf("intelligence: %d\n",perso.intelligence);
	printf("Sagesse: %d\n",perso.wisdom);
	printf("Agilité: %d\n",perso.agility);
	printf("Endurance: %d\n",perso.endurance);


	return 0;
}