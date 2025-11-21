#include <stdio.h>

int main() {

    int compteur = 5;   // tu peux changer la valeur (< 10)

    if (compteur >= 10) {
        printf("Erreur : compteur doit être < 10\n");
        return 1;
    }

    /* ================================
       TRIANGLE AVEC BOUCLES FOR
       ================================ */
    printf("Triangle avec for :\n");

    for (int i = 1; i <= compteur; i++) {

        for (int j = 1; j <= i; j++) {

            if (j % 2 == 0)
                printf("# ");
            else
                printf("* ");
        }

        printf("\n");
    }


    /* ================================
       TRIANGLE AVEC BOUCLE WHILE
       ================================ */
    printf("\nTriangle avec while :\n");

    int i = 1;

    while (i <= compteur) {

        int j = 1;

        while (j <= i) {

            if (j % 2 == 0)
                printf("# ");
            else
                printf("* ");

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
