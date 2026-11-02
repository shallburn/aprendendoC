#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    bool leu = false;
    double entrada;
    int c;

    while (!leu)
    {
        printf("Por favor, informe a temperatura em Celsius.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            double resultado = entrada + 273.15;
            if (resultado >= 0)
            {
                printf("A temperatura em Kelvin é %.2f\n", resultado);
                leu = true;
            }
            else
            {
                printf("A temperatura em Kelvin não é válida. Não existe "
                       "temperatura abaixo de 0 em Kelvin. Por favor,"
                       " informe uma nova\n");
            }
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