#include <stdio.h>
#include "fichier.h"

typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
} Etudiant;

int main() {
    Etudiant etudiants[5];
    char ligne[256];

    for (int i = 0; i < 5; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i+1);
        printf("Nom : "); scanf("%s", etudiants[i].nom);
        printf("Prénom : "); scanf("%s", etudiants[i].prenom);
        printf("Adresse : "); scanf(" %[^\n]", etudiants[i].adresse); // lit la ligne complète
        printf("Note 1 : "); scanf("%f", &etudiants[i].note1);
        printf("Note 2 : "); scanf("%f", &etudiants[i].note2);

        // Formatage de la ligne à écrire
        snprintf(ligne, sizeof(ligne), "%s %s %s %.2f %.2f\n",
                 etudiants[i].nom, etudiants[i].prenom, etudiants[i].adresse,
                 etudiants[i].note1, etudiants[i].note2);

        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    printf("Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");

    return 0;
}
