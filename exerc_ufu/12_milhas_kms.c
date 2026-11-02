#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    bool leu = false;
    double entrada;
    while (!leu)
    {
        printf("Por favor, informe a quantidade de milhas\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada <= 0)
            {
                printf("Milhas informadas estão incorretas. "
                       "O valor deve ser maior que 0. "
                       "Por favor, informe novamente\n");
            }
            else
            {
                printf("A distância em quilômetros é: %.2f\n", 1.61 * entrada);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que um valor válido "
                   "fosse inserido.\n");
            return 1;
        }
        else
        {
            printf("As milhas informadas não são válidas, digite novamente\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // não faz nada: só descarta o caractere
            }
        }
    }

    return 0;
}