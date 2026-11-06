#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, insira o valor em litros.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if(entrada < 0)
            {
                printf("O valor não pode ser negativo. Tente novamente.\n");
            }
            else
            {
                printf("O valor em metros cúbicos é: %.6f\n", entrada / 1000);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa encerrou sem uma entrada válida.\n");
            return 1;
        }
        else
        {
            printf("O valor informado não é válido. Por favor, tente novamente.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // não faz nada, descarta o caracter
            }
        }
    }
    return 0;
}