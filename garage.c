#include <stdio.h>
#include <string.h>
#include "garage.h"
#include "reparation.h"


garage initGarage(char nom[], int nbr, reparation r)
{
    garage gh;
    strcpy(gh.nom,nom);
    gh.liste[nbr - 1] = r;
    return gh;
}
void afficheGarage(garage g)
{
    printf("Garage : [ %s ],\n", g.nom);
    for( int i = 0; i < g.nbr; i++){
        printf("Nombre de réparation en cours ? : %d.\n", g.liste[i]);
    }
}
