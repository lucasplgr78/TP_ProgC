#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, valeur;
    int trouve = 0; // flag pour savoir si l'entier est présent

    // Initialisation de la graine pour rand()
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 100
    for(i = 0; i < TAILLE; i++) {
        tableau[i] = (rand() % 151) - 50;
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for(i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Saisie de l'entier à rechercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche dans le tableau
    for(i = 0; i < TAILLE; i++) {
        if(tableau[i] == valeur) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if(trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
