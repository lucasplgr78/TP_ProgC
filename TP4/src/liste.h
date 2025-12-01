#ifndef LISTE_H
#define LISTE_H

#include <stdint.h>

// Structure pour une couleur RGBA
struct couleur {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

// Structure pour un noeud de la liste
struct noeud {
    struct couleur couleur;
    struct noeud* suivant;
};

// Structure pour la liste de couleurs
struct liste_couleurs {
    struct noeud* tete;
};

// Fonctions
void init_liste(struct liste_couleurs* liste);
void insertion(struct couleur* couleur, struct liste_couleurs* liste);
void parcours(struct liste_couleurs* liste);

#endif
