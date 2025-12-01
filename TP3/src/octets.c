#include <stdio.h>

int main() {
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 3.14f;
    double d = 3.141592653589793;
    long double ld = 3.14159265358979323846264338327950288L;

    unsigned char *p;
    int j;

    // Affichage des octets de short
    p = (unsigned char*)&s;
    printf("Octets de short :\n");
    for(j = 0; j < sizeof(short); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de int
    p = (unsigned char*)&i;
    printf("Octets de int :\n");
    for(j = 0; j < sizeof(int); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de long int
    p = (unsigned char*)&li;
    printf("Octets de long int :\n");
    for(j = 0; j < sizeof(long int); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de float
    p = (unsigned char*)&f;
    printf("Octets de float :\n");
    for(j = 0; j < sizeof(float); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de double
    p = (unsigned char*)&d;
    printf("Octets de double :\n");
    for(j = 0; j < sizeof(double); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n\n");

    // Affichage des octets de long double
    p = (unsigned char*)&ld;
    printf("Octets de long double :\n");
    for(j = 0; j < sizeof(long double); j++) {
        printf(" %02x", p[j]);
    }
    printf("\n");

    return 0;
}
