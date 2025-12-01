#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, valeur;
    
    // Initialisation de la graine pour rand()
    srand(time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires croissantes
    tableau[0] = rand() % 10; // première valeur entre 0 et 9
    for(i = 1; i < TAILLE; i++) {
        tableau[i] = tableau[i-1] + (rand() % 10); // garantit l'ordre croissant
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for(i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Saisie de l'entier à rechercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    // Recherche dichotomique
    int debut = 0, fin = TAILLE - 1;
    int trouve = 0;

    while(debut <= fin) {
        int milieu = (debut + fin) / 2;
        if(tableau[milieu] == valeur) {
            trouve = 1;
            break;
        } else if(tableau[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
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
