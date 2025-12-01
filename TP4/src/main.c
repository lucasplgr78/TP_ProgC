#include <stdio.h>
#include <stdlib.h>
#include "operator.h"   // fonctions calculatrice
#include "fichier.h"    // fonctions gestion fichiers
#include "liste.h"      // fonctions liste de couleurs

// Déclarations des fonctions pour chaque exercice
void exercice4_1();   // calculatrice
void exercice4_2();   // gestion de fichiers
void exercice4_7();   // liste de couleurs

int main() {
    int choix;

    printf("=== TP4 - Menu des exercices ===\n");
    printf("1. Calculatrice (Exercice 4.1)\n");
    printf("2. Gestion de fichiers (Exercice 4.2)\n");
    printf("3. Liste de couleurs (Exercice 4.7)\n");
    printf("Entrez le numéro de l'exercice à exécuter : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1: exercice4_1(); break;
        case 2: exercice4_2(); break;
        case 3: exercice4_7(); break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}

// ================= EXERCICE 4.1 =================
void exercice4_1() {
    int num1, num2;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'opérateur (+ - * / %% & | ~) : ");
    scanf(" %c", &op); // espace avant %c pour éviter problème de buffer

    switch(op) {
        case '+': printf("Résultat : %d\n", somme(num1,num2)); break;
        case '-': printf("Résultat : %d\n", difference(num1,num2)); break;
        case '*': printf("Résultat : %d\n", produit(num1,num2)); break;
        case '/': printf("Résultat : %d\n", quotient(num1,num2)); break;
        case '%': printf("Résultat : %d\n", modulo(num1,num2)); break;
        case '&': printf("Résultat : %d\n", et(num1,num2)); break;
        case '|': printf("Résultat : %d\n", ou(num1,num2)); break;
        case '~': printf("Résultat : %d\n", negation(num1)); break;
        default: printf("Opérateur invalide.\n");
    }
}

// ================= EXERCICE 4.2 =================
void exercice4_2() {
    int choix;
    char nom_fichier[100];
    char message[256];

    printf("Que souhaitez-vous faire ?\n");
    printf("1. Lire un fichier\n");
    printf("2. Écrire dans un fichier\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    if(choix == 1) {
        printf("Entrez le nom du fichier à lire : ");
        scanf("%s", nom_fichier);
        lire_fichier(nom_fichier);
    } else if(choix == 2) {
        printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
        scanf("%s", nom_fichier);
        printf("Entrez le message à écrire : ");
        scanf(" %[^\n]", message); // pour lire une ligne entière
        ecrire_dans_fichier(nom_fichier, message);
    } else {
        printf("Choix invalide.\n");
    }
}

// ================= EXERCICE 4.7 =================
void exercice4_7() {
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    // Définition de 10 couleurs
    struct couleur couleurs[10] = {
        {0x00, 0x00, 0x00, 0xFF},
        {0xA5, 0x2A, 0x2A, 0xFF},
        {0xFF, 0xA5, 0x00, 0xFF},
        {0x80, 0x80, 0x80, 0xFF},
        {0x00, 0xFF, 0xFF, 0xFF},
        {0xFF, 0x00, 0xFF, 0xFF},
        {0xFF, 0xFF, 0x00, 0xFF},
        {0x00, 0x00, 0xFF, 0xFF},
        {0x00, 0xFF, 0x00, 0xFF},
        {0xFF, 0x00, 0x00, 0xFF}
    };

    for(int i = 0; i < 10; i++) {
        insertion(&couleurs[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
}
