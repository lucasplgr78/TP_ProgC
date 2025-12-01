#include <stdio.h>

// Fonction récursive pour calculer la factorielle
int factorielle(int num) {
    if (num == 0) {
        return 1;  // 0! = 1
    } else {
        return num * factorielle(num - 1);
    }
}

int main() {
    int n;

    // Exemple : test avec plusieurs valeurs
    int valeurs[] = {0, 1, 2, 3, 5, 7};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < taille; i++) {
        n = valeurs[i];
        printf("%d! = %d\n", n, factorielle(n));
    }

    // Optionnel : demander à l'utilisateur une valeur
    /*
    printf("Entrez un entier naturel : ");
    scanf("%d", &n);
    printf("%d! = %d\n", n, factorielle(n));
    */

    return 0;
}
