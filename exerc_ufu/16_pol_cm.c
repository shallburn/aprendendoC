#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, informe o valor em polegadas.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada < 0)
            {
                printf("O valor inserido não é válido. O valor não pode ser negativo.\n");
            }
            else
            {
                printf("O valor convertido para centímetros é: %.2f\n", entrada * 2.54);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma entrada válida "
                   "fosse informada.\n");
            return 1;
        }
        else
        {
            printf("O valor informado não é válido, por favor, tente novamente\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // descarta caracter
            }
        }
    }

    return 0;
}