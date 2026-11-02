#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, informe o valor em radianos.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            printf("O valor convertido para graus é: %.6f\n", entrada * (180 / 3.141592));
            leu = true;
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma entrada válida "
                   "fosse fornecida.\n");
            return 1;
        }
        else
        {
            printf("O valor de radiano fornecido é inválido. Por favor, "
                   "informe novamente.\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // descarta caracter
            }
        }
    }

    return 0;
}