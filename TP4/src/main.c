#include <stdio.h>
#include "etudiant.h"
#include "fichier.h"

int main() {
    Etudiant etudiants[5];
    char buffer[200];

    for (int i = 0; i < 5; i++) {
        printf("Entrez les details de l'etudiant.e %d :\n", i+1);
        printf("Nom : ");
        scanf(" %[^\n]", etudiants[i].nom);
        printf("Prenom : ");
        scanf(" %[^\n]", etudiants[i].prenom);
        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);
        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);
        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);

        // Création d'une ligne formatée pour le fichier
        sprintf(buffer, "%s %s %s %.2f %.2f",
                etudiants[i].nom, etudiants[i].prenom, etudiants[i].adresse,
                etudiants[i].note1, etudiants[i].note2);

        ecrire_dans_fichier("etudiant.txt", buffer);
    }

    printf("\nLes details des etudiants ont ete enregistres dans etudiant.txt\n");

    printf("\nLecture du fichier etudiant.txt :\n");
    lire_fichier("etudiant.txt");

    return 0;
}
