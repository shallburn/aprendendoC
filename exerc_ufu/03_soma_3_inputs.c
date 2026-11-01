#include <stdio.h>

int main(void) {
    int contador = 0;
    int entrada;
    int soma = 0;
    int c;
    
    while (contador < 3) {
        printf("Por favor, informe seu %d número inteiro\n", contador + 1);
        int lido = scanf("%d", &entrada);
        if (lido == 1) {
            soma += entrada;
            contador = contador + 1;
        } else if (lido == EOF) {
            printf("A entrada terminou antes dos três números\n");
            return 1;
        } else {
            printf("O número informado não é inteiro, digite novamente\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            // não faz nada: só descarta o caractere
            }
        }
    }
    printf("A soma dos números inteiros que você informou é: %d\n", soma);
    return 0;
}