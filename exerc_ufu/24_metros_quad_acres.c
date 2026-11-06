#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Olá, por favor, informe o valor em metros².\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada < 0)
            {
                printf("O valor não pode ser negativo. Tente novamente.\n");
            }
            else
            {
                printf("O valor convertido em acres é: %.6f\n", entrada * 0.000247);
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
            printf("A entrada informada é inválida, tente novamente.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // descarta caracter
            }
        }
    }
    return 0;
}