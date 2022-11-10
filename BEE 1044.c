/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Múltiplos
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Como aqui não tem boolean, eu declarei a variavel ehMultiplo como 0 = false e 1 = true
    int numA, numB, ehMultiplo = 0;

    // Apenas para limpar o terminal
    system("cls");

    // Obtendo os inputs
    scanf("%d %d", &numA, &numB);

    // Para eu descobrir se é múltiplo do outro basta eu multiplicar o menor input (ex: A) por todos outros números até chegar no outro valor inserido (ex: B). Se eu descobrir que é múltiplo eu altero o valor de ehMultiplo pra 1, devolvendo a resposta conforme solicitado no exercício
    if (numA > numB)
    {
        for (int contador = 1; contador < numA; contador++)
        {
            if (contador * numB == numA)
            {
                ehMultiplo = 1;
                break;
            }
            else
            {
                ehMultiplo = 0;
            }
        }

        if (ehMultiplo == 1)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
    else
    {
        for (int contador = 1; contador < numB; contador++)
        {
            if (contador * numA == numB)
            {
                ehMultiplo = 1;
                break;
            }
            else
            {
                ehMultiplo = 0;
            }
        }

        if (ehMultiplo == 1)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }

    return 0;
}
