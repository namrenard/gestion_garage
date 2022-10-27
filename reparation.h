// reparation.h

#ifndef __reparation_h
#define __reparation_h
#include "vehicule.h"
#include "garage.h"

struct reparation_s
{
    char motif[255];
    vehicule v;
    garage go;
    Bool enCours;
};
typedef struct reparation_s reparation;

void afficheReparation(reparation r);
reparation initReparation(vehicule v, char motif[], garage g, Bool enCours);
reparation ajouteReparation(vehicule vo, char motif[250], garage go);
reparation supprimeReparation(vehicule vo, garage gu);
#endif

