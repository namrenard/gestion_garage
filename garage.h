//garage.h

#ifndef __garage_h
#define __garage_h
#include "vehicule.h"
#include "reparation.h"

struct garage_s
{
char nom[255];
int nbr;
reparation liste[100];
};
typedef struct garage_s garage;

garage initGarage(char nom[], int nbr, reparation r);
void afficheGarage(garage g);


#endif