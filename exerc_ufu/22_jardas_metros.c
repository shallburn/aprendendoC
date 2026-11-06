#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, informe o valor em jardas.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada < 0)
            {
                printf("O valor não pode ser negativo. Por favor tente "
                       "novamente.\n");
            }
            else
            {
                printf("O valor em metros é: %.2f\n", 0.91 * entrada);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma entrada válida"
                   " fosse fornecida.\n");
            return 1;
        }
        else
        {
            printf("O valor informado não é válido, por favor, tente"
                   " novamente.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // descarta caracter
            }
        }
    }
    return 0;
}