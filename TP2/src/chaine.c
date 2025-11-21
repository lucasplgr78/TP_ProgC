#include <stdio.h>

int main() {
    // Chaînes de test
    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100]; // pour copier str1
    char concat[200]; // pour concaténation

    // 1️⃣ Calcul de la longueur de str1
    int longueur = 0;
    while(str1[longueur] != '\0') {
        longueur++;
    }
    printf("Longueur de str1 : %d\n", longueur);

    // 2️⃣ Copie de str1 dans copie
    int i = 0;
    while(str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0'; // fin de chaîne
    printf("Copie de str1 : %s\n", copie);

    // 3️⃣ Concaténation de str1 et str2 dans concat
    // Copier str1 d'abord
    i = 0;
    while(str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }

    // Ajouter str2 après
    int j = 0;
    while(str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0'; // fin de chaîne

    printf("Concaténation : %s\n", concat);

    return 0;
}
