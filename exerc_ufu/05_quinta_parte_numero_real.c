#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool leu = false;
    double entrada;
    int c;
    while (!leu)
    {
        printf("Por favor, insira o número real para saber a quinta parte dele\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            printf("A quinta parte do número real que você forneceu é: %.8g\n", entrada / 5.0);
            leu = true;
        }
        else if (lidos == EOF)
        {
            printf("O programa encerrou antes de você fornecer um número real\n");
            return 1;
        }
        else
        {
            printf("O número informado não é real, digite novamente\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // não faz nada: só descarta o caractere
            }
        }
    }
    return 0;
}