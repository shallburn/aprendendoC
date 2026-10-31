#include <stdio.h>

// https://www.facom.ufu.br/~backes/gci007/ListaC01.pdf
// https://learnxinyminutes.com/c/
// https://www.w3schools.com/c/c_ref_stdio.php

int main(void) {
    int numero;
    printf("Por favor, informe um número inteiro\n");
    int entrada = scanf("%d", &numero);

    if (entrada == 1) {
        printf("%d\n", numero);
    } else {
        printf("Você não digitou um número inteiro\n");
    }
    return 0;
}