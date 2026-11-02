#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int c;
    double entrada;
    bool leu = false;

    while (!leu)
    {
        printf("Por favor, insira um ângulo válido em graus.\n");
        int lidos = scanf("%lf", &entrada);

        if (lidos == 1)
        {

            printf("O resultado em radianos é: %.6f\n", entrada * (3.141592 / 180));
            leu = true;
        }
        else if (lidos == EOF)
        {
            printf("O programa foi encerrado antes que uma entrada válida fosse"
                   " informada.\n");
            return 1;
        }
        else
        {
            printf("O ângulo informado não é válido, por favor, informe novamente\n");
            while ((c = getchar()) != '\n' && c != EOF)
            {
                // descarta caracter
            }
        }
    }
    return 0;
}