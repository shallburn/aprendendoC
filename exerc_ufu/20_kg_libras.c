#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, informe o valor em quilogramas.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada < 0)
            {
                printf("O valor não pode ser negativo. Por favor, tente "
                       "novamente\n");
            }
            else
            {
                printf("O valor em libras é %.2f\n", entrada / 0.45);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma entrada válida fosse"
                   " informada.\n");
            return 1;
        }
        else
        {
            printf("O valor informado não é válido. Por favor, tente novamente.\n");
            while((c = getchar()) != '\n' && c != EOF)
            {
                // não faz nada, descarta o caracter
            }
        }
    }
    return 0;
}