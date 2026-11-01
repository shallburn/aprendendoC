#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool leu = false;
    double entrada;
    int c;

    while (!leu)
    {
        printf("Por favor, informe a temperatura em celsius:\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {
            printf("A temperatura informado em Fahrenheit é: %.2f\n",
                   entrada * (9.0 / 5.0) + 32.0);
            leu = true;
        }
        else if (lidos == EOF)
        {
            printf("O programa encerrou antes de você fornecer uma temperatura válida\n");
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