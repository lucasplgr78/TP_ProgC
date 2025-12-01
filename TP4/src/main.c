#include <stdio.h>
#include <string.h>
#include "fichier.h"

int main() {
    int choix;
    char nom[100];
    char message[1000];

    printf("Que souhaitez-vous faire ?\n1. Lire un fichier\n2. Écrire dans un fichier\nVotre choix : ");
    scanf("%d", &choix);
    getchar(); // Pour consommer le retour chariot après scanf

    if (choix == 1) {
        printf("Entrez le nom du fichier à lire : ");
        fgets(nom, sizeof(nom), stdin);
        nom[strcspn(nom, "\n")] = 0; // enlever le '\n'
        printf("Contenu du fichier %s :\n", nom);
        lire_fichier(nom);
    } else if (choix == 2) {
        printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
        fgets(nom, sizeof(nom), stdin);
        nom[strcspn(nom, "\n")] = 0;

        printf("Entrez le message à écrire : ");
        fgets(message, sizeof(message), stdin);
        message[strcspn(message, "\n")] = 0;

        ecrire_dans_fichier(nom, message);
    } else {
        printf("Choix invalide.\n");
    }

    return 0;
}
