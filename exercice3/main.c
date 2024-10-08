#include "struct.h"


int main()
{
	character *perso=malloc(sizeof(*perso));

	perso->strength;
	perso->intelligence;
	perso->wisdom;
	perso->agility;
	perso->endurance;


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

	printf("Force: %d\n",perso->strength);
	printf("intelligence: %d\n",perso->intelligence);
	printf("Sagesse: %d\n",perso->wisdom);
	printf("Agilité: %d\n",perso->agility);
	printf("Endurance: %d\n",perso->endurance);

	free(perso);
	return 0;
}