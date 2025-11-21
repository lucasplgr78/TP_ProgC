#include <stdio.h>

int main() {
    unsigned int d = 0x00100008; // exemple de valeur (modifiable)

    int taille = sizeof(d) * 8; // nombre de bits dans un int (souvent 32)

    // Masques pour le 4ème et 20ème bits de gauche
    int bit4 = (d >> (taille - 4)) & 1;
    int bit20 = (d >> (taille - 20)) & 1;

    // Vérification si les deux bits sont à 1
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}
