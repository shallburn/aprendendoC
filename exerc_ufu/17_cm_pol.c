#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, informe o valor em centímetros.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada < 0)
            {
                printf("Valor informado não é válido. É necessário que não seja negativo.\n");
            }
            else
            {
                printf("O valor convertido para polegadas é: %.2f\n", entrada / 2.54);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma entrada válida fosse inserida.\n");
            return 1;
        }
        else
        {
            printf("Valor inserido é inválido, por favor, tente novamente.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // descarta caracter
            }
        }
    }
    return 0;
}