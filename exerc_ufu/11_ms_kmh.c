#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, informe a velocidade desejada em m/s\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada < 0)
            {
                printf("Velocidade inserida é inválida. A velocidade não pode ser negativa.\n");
            }
            else
            {
                printf("A velocidade em km/h é: %.2f\n", entrada * 3.6);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma velocidade em m/s"
                   " fosse informada\n");
            return 1;
        }
        else
        {
            printf("A velocidade informada não é válida, digite novamente\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // não faz nada: só descarta o caractere
            }
        }
    }

    return 0;
}