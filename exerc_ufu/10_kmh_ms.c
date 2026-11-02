#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool leu = false;
    double entrada;
    int c;

    while (!leu)
    {
        printf("Por favor, insira a velocidade em km/h\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            if (entrada < 0)
            {
                printf("Velocidade inserida é inválida. A velocidade não pode ser negativa.\n");
            }
            else
            {
                printf("A velocidade em m/s é: %.2f\n", entrada / 3.6);
                leu = true;
            }
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma velocidade válida fosse informada.\n");
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
