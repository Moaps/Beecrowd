/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorA, valorB, valorC, maior, meio, menor;

    // Apenas para limpar o terminal
    system("cls");

    // Coletando o input
    scanf("%d %d %d", &valorA, &valorB, &valorC);

    // Sequência de Ifs para ordenar crescentemente os valores
    if (valorA > valorB && valorA > valorC)
    {
        maior = valorA;
        if (valorB > valorC)
        {
            meio = valorB;
            menor = valorC;
        }
        else
        {
            meio = valorC;
            menor = valorB;
        }
        
    }
    else if (valorB > valorA && valorB > valorC)
    {
        maior = valorB;
        if (valorA > valorC)
        {
            meio = valorA;
            menor = valorC;
        }
        else
        {
            meio = valorC;
            menor = valorA;
        }
        
    }
    else if (valorC > valorA && valorC > valorB)
    {
        maior = valorC;
        if (valorA > valorB)
        {
            meio = valorA;
            menor = valorB;
        }
        else
        {
            meio = valorB;
            menor = valorA;
        }
        
    }

    //Devolvo a resposta conforme é solicitado no exercício
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", menor, meio, maior, valorA, valorB, valorC);

    return 0;
}
