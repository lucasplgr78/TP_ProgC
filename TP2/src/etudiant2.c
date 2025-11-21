#include <stdio.h>
#include <string.h>

#define N_ETUDIANTS 5

// Définition de la structure étudiant
typedef struct {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float note_prog;  // note Programmation C
    float note_sys;   // note Système d'exploitation
} Etudiant;

int main() {
    Etudiant etudiants[N_ETUDIANTS];

    // Initialisation des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Alice");
    strcpy(etudiants[0].adresse, "1 rue A, Paris");
    etudiants[0].note_prog = 15.5;
    etudiants[0].note_sys = 14.0;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Bob");
    strcpy(etudiants[1].adresse, "2 avenue B, Lyon");
    etudiants[1].note_prog = 12.0;
    etudiants[1].note_sys = 13.5;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "3 boulevard C, Marseille");
    etudiants[2].note_prog = 17.0;
    etudiants[2].note_sys = 16.5;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "4 place D, Lille");
    etudiants[3].note_prog = 14.5;
    etudiants[3].note_sys = 12.0;

    strcpy(etudiants[4].nom, "Lemoine");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "5 allée E, Nantes");
    etudiants[4].note_prog = 16.0;
    etudiants[4].note_sys = 15.0;

    // Affichage des informations
    printf("Informations des étudiants :\n\n");
    for(int i = 0; i < N_ETUDIANTS; i++) {
        printf("Étudiant %d:\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.1f\n", etudiants[i].note_prog);
        printf("Note Système d'exploitation : %.1f\n\n", etudiants[i].note_sys);
    }

    return 0;
}
