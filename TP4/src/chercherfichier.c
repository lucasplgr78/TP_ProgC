#include <stdio.h>
#include <string.h>

#define MAX_LIGNE 1024

// Fonction pour compter combien de fois 'mot' apparaît dans 'ligne'
int compter_occurrences(const char *ligne, const char *mot) {
    int count = 0;
    const char *ptr = ligne;

    while ((ptr = strstr(ptr, mot)) != NULL) { // strstr trouve la sous-chaîne
        count++;
        ptr += strlen(mot); // avancer le pointeur après le mot trouvé
    }
    return count;
}

int main() {
    char nom_fichier[256];
    char phrase[256];
    char ligne[MAX_LIGNE];
    FILE *fichier;

    // Demander le nom du fichier
    printf("Entrez le nom du fichier : ");
    scanf("%255s", nom_fichier);

    // Demander la phrase à rechercher
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    getchar(); // pour consommer le \n restant après scanf
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = 0; // retirer le \n de la fin

    // Ouvrir le fichier
    fichier = fopen(nom_fichier, "r");
    if (!fichier) {
        printf("Impossible d'ouvrir le fichier %s\n", nom_fichier);
        return 1;
    }

    int num_ligne = 1;
    int trouve = 0;
    while (fgets(ligne, sizeof(ligne), fichier)) {
        int occ = compter_occurrences(ligne, phrase);
        if (occ > 0) {
            printf("Ligne %d, %d fois\n", num_ligne, occ);
            trouve = 1;
        }
        num_ligne++;
    }

    if (!trouve) {
        printf("Phrase non trouvée dans le fichier.\n");
    }

    fclose(fichier);
    return 0;
}
