#include <stdio.h>

int main() {

    // Types char
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    // Types short
    short s = -123;
    signed short ss = -456;
    unsigned short us = 456;

    // Types int
    int i = -12345;
    signed int si = -67890;
    unsigned int ui = 67890;

    // Types long int
    long int li = -123456L;
    signed long int sli = -987654L;
    unsigned long int uli = 987654UL;

    // Types long long int
    long long int lli = -123456789LL;
    signed long long int slli = -987654321LL;
    unsigned long long int ulli = 987654321ULL;

    // Types flottants
    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.618033988749895L;

    // Affichage
    printf("char = %c\n", c);
    printf("signed char = %d\n", sc);
    printf("unsigned char = %u\n", uc);

    printf("\nshort = %d\n", s);
    printf("signed short = %d\n", ss);
    printf("unsigned short = %u\n", us);

    printf("\nint = %d\n", i);
    printf("signed int = %d\n", si);
    printf("unsigned int = %u\n", ui);

    printf("\nlong int = %ld\n", li);
    printf("signed long int = %ld\n", sli);
    printf("unsigned long int = %lu\n", uli);

    printf("\nlong long int = %lld\n", lli);
    printf("signed long long int = %lld\n", slli);
    printf("unsigned long long int = %llu\n", ulli);

    printf("\nfloat = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}
