#include <stdio.h>

int main() {
    int a=16, b=3;
    int resultat = a + b;
    printf("L'Addition est : %d\n", resultat);
    resultat =a-b;
    printf("La Soustraction est : %d\n", resultat);
    resultat =a*b;
    printf("La Multiplication est : %d\n", resultat);
     resultat = a / b;
    printf("La Division est : %d\n", resultat);
    resultat = a % b;
    printf("Modulo : %d\n", resultat);
    printf("a == b : %d\n", (a == b));
    printf("a > b  : %d\n", (a > b));

    return 0;
}







