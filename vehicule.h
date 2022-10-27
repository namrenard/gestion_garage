// vehicule.h

#ifndef __vehicule_h
#define __vehicule_h

enum Boolean
{
    false, true
};
typedef enum Boolean Bool;

struct vehicule_s
{
char modele[255];
int numCarteGrise;
Bool garantie;
};
typedef struct vehicule_s vehicule;

struct moto_s
{
vehicule v;
int cylindree;
};
typedef struct moto_s moto;

struct voiture_s
{
vehicule v;
char motorisation[50];
};
typedef struct voiture_s voiture;

void afficheVehicule(vehicule v);
vehicule initVehicule(char modele[255], int numCarteGrise, Bool garantie);
void afficheMoto(moto m);
moto initMoto (vehicule v, int cylindree);
void afficheVoiture (voiture vo);
voiture initVoiture (vehicule vo, char motorisation[50]);

#endif