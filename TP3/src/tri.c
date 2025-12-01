#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, j, temp;

    // Initialisation de la graine pour rand()
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 100
    for(i = 0; i < TAILLE; i++) {
        tableau[i] = (rand() % 151) - 50; // valeurs de -50 à 100
    }

    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    for(i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Tri à bulles
    for(i = 0; i < TAILLE - 1; i++) {
        for(j = 0; j < TAILLE - i - 1; j++) {
            if(tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié par ordre croissant :\n");
    for(i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}
