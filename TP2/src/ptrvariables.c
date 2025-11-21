#include <stdio.h>

int main() {
    // Déclaration des variables de base
    char c = 'A';
    short s = 1234;
    int i = 123456;
    long int li = 1234567890;
    long long int lli = 123456789012345;
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.6180339887L;

    // Déclaration des pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Avant manipulation
    printf("Avant manipulation :\n");
    printf("Adresse de c : %p, Valeur : %x\n", (void*)pc, *(unsigned char*)pc);
    printf("Adresse de s : %p, Valeur : %x\n", (void*)ps, *(unsigned short*)ps);
    printf("Adresse de i : %p, Valeur : %x\n", (void*)pi, *(unsigned int*)pi);
    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *(unsigned long*)pli);
    printf("Adresse de lli : %p, Valeur : %llx\n", (void*)plli, *(unsigned long long*)plli);
    printf("Adresse de f : %p, Valeur : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur : %llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : %llx\n", (void*)pld, *(unsigned long long*)pld);

    // Manipulation via pointeurs
    *pc += 1;
    *ps += 1;
    *pi += 1;
    *pli += 1;
    *plli += 1;
    *(unsigned int*)pf += 1;
    *(unsigned long long*)pd += 1;
    *(unsigned long long*)pld += 1;

    // Après manipulation
    printf("\nAprès manipulation :\n");
    printf("Adresse de c : %p, Valeur : %x\n", (void*)pc, *(unsigned char*)pc);
    printf("Adresse de s : %p, Valeur : %x\n", (void*)ps, *(unsigned short*)ps);
    printf("Adresse de i : %p, Valeur : %x\n", (void*)pi, *(unsigned int*)pi);
    printf("Adresse de li : %p, Valeur : %lx\n", (void*)pli, *(unsigned long*)pli);
    printf("Adresse de lli : %p, Valeur : %llx\n", (void*)plli, *(unsigned long long*)plli);
    printf("Adresse de f : %p, Valeur : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur : %llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse de ld : %p, Valeur : %llx\n", (void*)pld, *(unsigned long long*)pld);

    return 0;
}
