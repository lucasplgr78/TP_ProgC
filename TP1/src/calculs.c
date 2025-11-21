#include <stdio.h>

int main() {
    int num1 = 12;
    int num2 = 5;
    char op = '+';  // change le caractère pour tester d'autres opérations

    int result;  // pour stocker le résultat des opérations
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if(num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Erreur : division par zero\n");
            break;

        case '%':
            if(num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : modulo par zero\n");
            break;

        case '&':
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;

        case '|':
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;

        case '~':
            printf("~%d = %d\n", num1, ~num1);
            break;

        default:
            printf("Opérateur inconnu : %c\n", op);
    }

    return 0;
}


