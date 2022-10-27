#include <stdio.h>
#include "vehicule.h"
#include "garage.h"
#include "reparation.h"


int main() 
{
printf("********** Exercice 1 **********\n");
    vehicule tr = {"Trotinette", 7443642, true};
    afficheVehicule(tr);
    vehicule x = initVehicule("Trottinette", 89943762, true);
    afficheVehicule(x);
printf("********** Exercice 2 **********\n");
    voiture ss = {"Peugeot J5",5365463,true, "diesel"};
    voiture ssa = {"Ferrari 308 GTS",2159754,true, "essence"};
    moto m = {"Solex",9003648,false, 12};
    afficheVoiture(ss);
    afficheVoiture(ssa);
    afficheMoto(m);
    voiture z = initVoiture(x,"electrique");
    moto zi = initMoto(x, 150);
    afficheMoto(zi);
    printf("********** Exercice 3 **********\n");
    garage h = {"Feu rouge Brest",0,0};
    reparation r;
     r = initReparation("Fuite de liquide de clignotants", z, h, true);
    afficheReparation(r);
    printf("********** Exercice 4 **********\n");
    garage gb;
    gb = initGarage("Garage Roger Bricoloto", 5, r);
    afficheGarage(gb);
    printf("\n");
    ajouteReparation(tr,"Moteur HS", gb);
    ajouteReparation(ss.v,"Roue voilee", gb);
    ajouteReparation(ssa.v,"Defaut de turbo", gb);
    afficheGarage(gb);
    supprimeReparation(ssa,gb);
}