#include <stdio.h>
#include <string.h>
#include "vehicule.h"

void afficheVehicule(vehicule v)
{
    printf("Véhicule : %s,\n Numero de carte grise : %d,\n sous garantie ? :%d.\n",v.modele, v.numCarteGrise,
           v.garantie);
}
vehicule initVehicule(char modele[255], int numCarteGrise, Bool garantie)
{
    vehicule v ;
    strcpy(v.modele, modele);
    v.numCarteGrise = numCarteGrise;
    v.garantie = garantie;
    return v;
}
void afficheMoto(moto m)
{
    printf("Moto : %d cm^3\n, Modele : %s,\n Numéro de carte grise : %d,\n sous garantie ? :%d.\n", m.cylindree,
           m.v.modele, m.v.numCarteGrise, m.v.garantie);
}
moto initMoto(vehicule v, int cylindree)
{
    moto m;
    m.cylindree = cylindree;
    strcpy(m.v.modele ,v.modele);
    m.v.numCarteGrise = v.numCarteGrise;
    m.v.garantie = v.garantie;

    return m ;
}
void afficheVoiture (voiture vo)
{
    printf("Voiture  %s,\n Modele : %s,\n Numero de carte grise : %d,\n sous garantie ? :%d.\n", vo.motorisation,
           vo.v.modele, vo.v.numCarteGrise, vo.v.garantie);
}
voiture initVoiture (vehicule vo, char motorisation[50])
{
    voiture vot;
    strcpy(vot.motorisation,motorisation);
    strcpy(vot.v.modele,vo.modele);
    vot.v.numCarteGrise = vo.numCarteGrise;
    vot.v.garantie = vo.garantie;
    return vot;
}