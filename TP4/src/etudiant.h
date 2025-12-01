#ifndef ETUDIANT_H
#define ETUDIANT_H

#define TAILLE_NOM 50
#define TAILLE_PRENOM 50
#define TAILLE_ADRESSE 100

typedef struct {
    char nom[TAILLE_NOM];
    char prenom[TAILLE_PRENOM];
    char adresse[TAILLE_ADRESSE];
    float note1;
    float note2;
} Etudiant;

#endif

