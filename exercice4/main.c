#include "struct.h"

int main()
{
	character *perso=malloc(sizeof(*perso));

	perso->name=malloc(strlen(" ")*sizeof(char));
	perso->name=strcpy(perso->name," ");

	perso->strength;
	perso->intelligence;
	perso->wisdom;
	perso->agility;
	perso->endurance;

	printf("Saisir le nom: \n");
	scanf("%s",perso->name);

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

  printf("Nom: %s\n",perso->name);
	printf("Force: %d\n",perso->strength);
	printf("intelligence: %d\n",perso->intelligence);
	printf("Sagesse: %d\n",perso->wisdom);
	printf("Agilité: %d\n",perso->agility);
	printf("Endurance: %d\n",perso->endurance);





	return 0;
}