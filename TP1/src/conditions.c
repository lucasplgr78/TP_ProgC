#include <stdio.h>

int main() {

    int somme = 0;

    for (int n = 1; n <= 1000; n++) {

        // Si divisible par 11 → on ignore ce nombre
        if (n % 11 == 0) {
            continue;
        }

        // Si divisible par 5 ou 7 → on l'ajoute à la somme
        if (n % 5 == 0 || n % 7 == 0) {
            somme += n;
        }

        // Si la somme dépasse 5000 → on arrête tout
        if (somme > 5000) {
            break;
        }
    }

    printf("Somme finale = %d\n", somme);

    return 0;
}
