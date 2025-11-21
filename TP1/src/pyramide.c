#include <stdio.h>

int main() {
    int n = 5; // hauteur de la pyramide
    int i, j;

    for(i = 1; i <= n; i++) {
        // afficher les espaces pour centrer
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // afficher les nombres croissants
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // afficher les nombres décroissants
        for(j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // fin de ligne
    }

    printf("\nPyramide générée !\n");

    return 0;
}

