#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool leu = false;
    double entrada;
    int c;

    while (!leu)
    {
        printf("Por favor, informe a temperatura em Kelvin:\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if(entrada >= 0)
            {
                printf("A temperatura informada em Celsius é: %.2f\n", entrada - 273.15);
                leu = true;
            } else 
            {
                printf("A temperatura informada em Kelvin não é válida: %.2f. "
                    "Não existe temperatura em Kelvin abaixo de 0.\n", entrada);
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
