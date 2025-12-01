#include <stdio.h>

#define NB_PHRASES 10
#define TAILLE_MAX 256

int main() {
    char *phrases[NB_PHRASES] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char saisie[TAILLE_MAX];
    int trouve = 0;

    // Saisie de la phrase à rechercher
    printf("Entrez la phrase à rechercher :\n");
    fgets(saisie, TAILLE_MAX, stdin);

    // Supprimer le caractère '\n' à la fin si présent
    int i = 0;
    while(saisie[i] != '\0') {
        if(saisie[i] == '\n') {
            saisie[i] = '\0';
            break;
        }
        i++;
    }

    // Recherche de la phrase dans le tableau
    for(i = 0; i < NB_PHRASES; i++) {
        int j = 0;
        int egal = 1;
        while(phrases[i][j] != '\0' || saisie[j] != '\0') {
            if(phrases[i][j] != saisie[j]) {
                egal = 0;
                break;
            }
            j++;
        }
        if(egal) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if(trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}


