#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {
    int tabInt[TAILLE];
    float tabFloat[TAILLE];
    int *pInt;
    float *pFloat;

    // Initialisation de la graine pour rand()
    srand(time(NULL));

    // Remplissage des tableaux avec des valeurs aléatoires
    for(int i = 0; i < TAILLE; i++) {
        *(tabInt + i) = rand() % 101;        // entiers 0 à 100
        *(tabFloat + i) = ((float)(rand() % 1000)) / 100; // float 0.00 à 9.99
    }

    // Affichage avant multiplication
    printf("Tableau d'entiers (avant) :\n");
    for(pInt = tabInt; pInt < tabInt + TAILLE; pInt++) {
        printf("%d ", *pInt);
    }
    printf("\n\n");

    printf("Tableau de floats (avant) :\n");
    for(pFloat = tabFloat; pFloat < tabFloat + TAILLE; pFloat++) {
        printf("%.2f ", *pFloat);
    }
    printf("\n\n");

    // Multiplication par 3 des indices divisibles par 2
    for(int i = 0; i < TAILLE; i++) {
        if(i % 2 == 0) {
            *(tabInt + i) *= 3;
            *(tabFloat + i) *= 3;
        }
    }

    // Affichage après multiplication
    printf("Tableau d'entiers (après) :\n");
    for(pInt = tabInt; pInt < tabInt + TAILLE; pInt++) {
        printf("%d ", *pInt);
    }
    printf("\n\n");

    printf("Tableau de floats (après) :\n");
    for(pFloat = tabFloat; pFloat < tabFloat + TAILLE; pFloat++) {
        printf("%.2f ", *pFloat);
    }
    printf("\n");

    return 0;
}
