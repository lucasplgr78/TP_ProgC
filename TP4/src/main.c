// main.c
#include <stdio.h>
#include "operator.h"   // Pour les fonctions de calcul 4.1
#include "fichier.h"    // Pour les fonctions de lecture/écriture 4.2
#include "liste.h"      // Pour la gestion des couleurs 4.7

// Fonction pour l'exercice 4.1
void exercice4_1() {
    int num1, num2;
    char op;

    printf("Exercice 4.1 : Calcul avec opérateurs\n");
    printf("Entrez num1 : "); scanf("%d", &num1);
    printf("Entrez num2 : "); scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %, &, |, ~) : "); scanf(" %c", &op);

    int resultat;
    switch(op) {
        case '+': resultat = somme(num1, num2); break;
        case '-': resultat = difference(num1, num2); break;
        case '*': resultat = produit(num1, num2); break;
        case '/': resultat = quotient(num1, num2); break;
        case '%': resultat = modulo(num1, num2); break;
        case '&': resultat = et(num1, num2); break;
        case '|': resultat = ou(num1, num2); break;
        case '~': resultat = negation(num1); break;
        default: printf("Opérateur invalide !\n"); return;
    }
    printf("Résultat : %d\n", resultat);
}

// Fonction pour l'exercice 4.2
void exercice4_2() {
    int choix;
    char nom_fichier[100];
    char message[256];

    printf("Exercice 4.2 : Gestion de fichiers\n");

    int main() {
    int choix;

    printf("Choisissez l'exercice à exécuter :\n");
    printf("1. Exercice 4.1 : Calcul avec opérateurs\n");
    printf("2. Exercice 4.2 : Gestion de fichiers\n");
    printf("3. Exercice 4.7 : Liste de couleurs\n");
    printf("Votre choix : ");
    scanf("%d", &choix);

    switch(choix) {
        case 1: exercice4_1(); break;
        case 2: exercice4_2(); break;
        case 3: exercice4_7(); break;
        default: printf("Choix invalide !\n"); break;
    }

    return 0;
}

    printf("Que souhaitez-vous faire ?\n1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {
        printf("Entrez le nom du fichier à lire : ");
        scanf("%s", nom_fichier);
        lire_fichier(nom_fichier);
    } else if (choix == 2) {
        printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
        scanf("%s", nom_fichier);
        printf("Entrez le message à écrire : ");
        scanf(" %[^\n]", message);  // Lecture de toute la ligne
        ecrire_dans_fichier(nom_fichier, message);
    } else {
        printf("Choix invalide !\n");
    }
}

// Fonction pour l'exercice 4.7
void exercice4_7() {
    struct liste_couleurs ma_liste;
    init_liste(&ma_liste);

    struct couleur couleurs[10] = {
        {0x00,0x00,0x00,0xFF}, {0xA5,0x2A,0x2A,0xFF}, {0xFF,0xA5,0x00,0xFF},
        {0x80,0x80,0x80,0xFF}, {0x00,0xFF,0xFF,0xFF}, {0xFF,0x00,0xFF,0xFF},
        {0xFF,0xFF,0x00,0xFF}, {0x00,0x00,0xFF,0xFF}, {0x00,0xFF,0x00,0xFF},
        {0xFF,0x00,0x00,0xFF}
    };

    for (int i = 0; i < 10; i++) {
        insertion(&couleurs[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");
    parcours(&ma_liste);
}
