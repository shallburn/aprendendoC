#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, informe a distância em quilômetros.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada <= 0)
            {
                printf("Distância incorreta. O valor deve ser maior que 0."
                       " Por favor, informe novamente.\n");
            }
            else
            {
                printf("A distância em milhas é: %.2f\n", entrada / 1.61);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que um valor válido fosse "
                   "informado.\n");
            return 1;
        }
        else
        {
            printf("Os quilômetros informados não são válidos, digite novamente\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // não faz nada: só descarta o caractere
            }
        }
    }

    return 0;
}