#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Structure pour représenter une couleur RGBA
typedef struct {
    unsigned char r, g, b, a;
} Couleur;

// Fonction pour comparer deux couleurs
int couleurs_egales(Couleur c1, Couleur c2) {
    return (c1.r == c2.r) && (c1.g == c2.g) && (c1.b == c2.b) && (c1.a == c2.a);
}

int main() {
    Couleur tableau[TAILLE];
    Couleur distinctes[TAILLE]; // tableau pour les couleurs distinctes
    int compteur[TAILLE] = {0};
    int nbDistinctes = 0;

    srand(time(NULL));

    // Remplissage aléatoire du tableau de couleurs
    for(int i = 0; i < TAILLE; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = rand() % 256;
    }

    // Comptage des couleurs distinctes
    for(int i = 0; i < TAILLE; i++) {
        int trouve = 0;
        for(int j = 0; j < nbDistinctes; j++) {
            if(couleurs_egales(tableau[i], distinctes[j])) {
                compteur[j]++;
                trouve = 1;
                break;
            }
        }
        if(!trouve) {
            distinctes[nbDistinctes] = tableau[i];
            compteur[nbDistinctes] = 1;
            nbDistinctes++;
        }
    }

    // Affichage des couleurs distinctes et de leurs occurrences
    printf("Couleurs distinctes et occurrences :\n");
    for(int i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n", distinctes[i].r, distinctes[i].g,
                                            distinctes[i].b, distinctes[i].a,
                                            compteur[i]);
    }

    return 0;
}
