#include <stdio.h>
#include <string.h>
#include "etudiant.h"
#include "fichier.h"

#define N_ETUDIANTS 5

int main() {
    Etudiant tabEtudiants[N_ETUDIANTS];
    char ligne[256];
    
    for (int i = 0; i < N_ETUDIANTS; i++) {
        printf("Entrez les details de l'etudiant.e %d :\n", i + 1);
        printf("Nom : ");
        scanf("%49s", tabEtudiants[i].nom);
        printf("Prenom : ");
        scanf("%49s", tabEtudiants[i].prenom);
        printf("Adresse : ");
        scanf(" %99[^\n]", tabEtudiants[i].adresse);
        printf("Note 1 : ");
        scanf("%f", &tabEtudiants[i].note1);
        printf("Note 2 : ");
        scanf("%f", &tabEtudiants[i].note2);

        sprintf(ligne, "%s %s %s %.2f %.2f",
                tabEtudiants[i].nom,
                tabEtudiants[i].prenom,
                tabEtudiants[i].adresse,
                tabEtudiants[i].note1,
                tabEtudiants[i].note2);

        ecrire_dans_fichier("etudiant.txt", ligne);
    }

    printf("\nContenu du fichier etudiant.txt :\n");
    lire_fichier("etudiant.txt");

    return 0;
}
