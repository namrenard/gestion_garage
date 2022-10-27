#include <stdio.h>
#include <string.h>
#include "reparation.h"
#include "garage.h"
#include "vehicule.h"

void afficheReparation(reparation r){
    printf("Garage %s :\n prend en charge le vehicule %s - n° %d - garantie -> %d", r.go.nom, r.v.modele, r.v.numCarteGrise, r.v.garantie);
    printf("Reparation pour motif : %s\n", r.motif);
}
reparation initReparation(vehicule v, char motif[], garage g, Bool enCours){
    reparation r;
    r.v = v;
    strcpy(r.motif, motif);
    r.go = g;
    r.enCours = enCours;
    return r;
}
reparation ajouteReparation(vehicule vo, char motif[250], garage g)
{
    reparation f;
    f.v = vo;
    strcpy(f.motif, motif);
    f.go = g;
    return f;

}
reparation supprimeReparation(vehicule vo, garage g)
{
    for (int x = 0; x < g.nbr; x++){
        if(g.liste[x].r.v.modele == vo.modele){
            g.liste[x].r = g.liste[g.nbr - 1].r;
        }
    }

}