#include <stdio.h>



int main(void) {
    double numero;
    printf("Olá, por favor digite um número real.\n");
    int lido = scanf("%lf", &numero);
    if (lido == 1) {
        printf("%g\n", numero);
    } else {
        printf("Você não digitou um número real\n");
    }
    return 0;

}