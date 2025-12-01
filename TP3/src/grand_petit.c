#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100];
    int i;

    // Initialisation de rand()
    srand(time(NULL));

    // Remplissage du tableau avec valeurs aléatoires 1–1000
    for (i = 0; i < 100; i++) {
        tab[i] = rand() % 1000 + 1;
    }

    // Initialisation des variables min et max
    int min = tab[0];
    int max = tab[0];

    // Recherche du min et du max
    for (i = 1; i < 100; i++) {
        if (tab[i] > max)
            max = tab[i];
        if (tab[i] < min)
            min = tab[i];
    }

    // Affichage
    printf("Le numéro le plus grand est : %d\n", max);
    printf("Le numéro le plus petit est : %d\n", min);

    return 0;
}
