#include <stdio.h>

int main() {
    // Tableaux pour stocker les informations des étudiants
    char noms[5][20] = {"Dupont", "Martin", "Bernard", "Petit", "Lemoine"};
    char prenoms[5][20] = {"Alice", "Bob", "Claire", "David", "Emma"};
    char adresses[5][50] = {
        "1 rue A, Paris",
        "2 avenue B, Lyon",
        "3 boulevard C, Marseille",
        "4 place D, Lille",
        "5 allée E, Nantes"
    };
    
    float notes_prog[5] = {15.5, 12.0, 17.0, 14.5, 16.0};
    float notes_sys[5] = {14.0, 13.5, 16.5, 12.0, 15.0};

    // Affichage des informations
    printf("Informations des étudiants :\n\n");

    for(int i = 0; i < 5; i++) {
        printf("Étudiant %d:\n", i+1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", notes_prog[i]);
        printf("Note Système d'exploitation : %.1f\n\n", notes_sys[i]);
    }

    return 0;
}
