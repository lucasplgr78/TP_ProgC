#include <stdio.h>

void afficherBinaire(int n) {
    int taille = sizeof(int) * 8;  // nombre de bits dans un int

    for(int i = taille - 1; i >= 0; i--) {
        int bit = (n >> i) & 1;  // décalage + ET pour extraire le bit
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for(int i = 0; i < taille; i++) {
        printf("%d en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
