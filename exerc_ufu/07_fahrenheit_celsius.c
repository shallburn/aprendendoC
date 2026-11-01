#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool leu = false;
    double entrada;
    int c;

    while (!leu)
    {
        printf("Por favor, informe a temperatura em Fahrenheit:\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            printf("A temperatura informada em Celsius é: %.2f\n",
                   5.0 * (entrada - 32.0) / 9.0);
            leu = true;
        }
        else if (lidos == EOF)
        {
            printf("O programa encerrou antes que uma temperatura válida fosse informada\n");
            return 1;
        }
        else
        {
            printf("A temperatura informada não é válida, digite novamente\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // não faz nada: só descarta o caractere
            }
        }
    }
    return 0;
}
