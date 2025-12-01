#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

void init_liste(struct liste_couleurs* liste) {
    liste->tete = NULL;
}

void insertion(struct couleur* couleur, struct liste_couleurs* liste) {
    struct noeud* nouveau = (struct noeud*) malloc(sizeof(struct noeud));
    if (!nouveau) return; // sécurité
    nouveau->couleur = *couleur;
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

void parcours(struct liste_couleurs* liste) {
    struct noeud* courant = liste->tete;
    while (courant != NULL) {
        printf("RGBA: %02X %02X %02X %02X\n",
               courant->couleur.r,
               courant->couleur.g,
               courant->couleur.b,
               courant->couleur.a);
        courant = courant->suivant;
    }
}
