#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, insira o valor em metros cúbicos.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada < 0)
            {
                printf("Entrada inválida. É necessário que não seja negativo.\n");
            }
            else
            {
                printf("O valor convertido em litros é: %.2f\n", entrada * 1000);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma entrada válida fosse informada.\n");
            return 1;
        }
        else
        {
            printf("Entrada inválida. Por favor, tente novamente.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // descarta caracter
            }
        }
    }
    return 0;
}