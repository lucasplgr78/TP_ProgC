#include <stdio.h>

int main() {
    int n = 7; // nombre de termes à générer
    int u0 = 0, u1 = 1, un; 

    printf("Suite de Fibonacci jusqu'au terme %d :\n", n);

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            printf("%d", u0);
        } else if(i == 1) {
            printf(", %d", u1);
        } else {
            un = u0 + u1;
            printf(", %d", un);
            u0 = u1;
            u1 = un;
        }
    }

    printf("\n");

    return 0;
}
