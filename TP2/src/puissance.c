#include <stdio.h>

int main() {
    int a = 2;  // base
    int b = 3;  // exposant
    int resultat = 1;  // initialisation

    // Calcul de la puissance a^b
    for(int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Affichage
    printf("%d^%d = %d\n", a, b, resultat);

    return 0;
}
