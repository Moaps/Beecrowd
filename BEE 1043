/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float ladoA, ladoB, ladoC, area, perimetro;
    float maior, meio, menor;

    // Apenas para limpar o terminal
    system("cls");

    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

    // Sequência de Ifs para ordenar crescentemente os lados
    if (ladoA > ladoB && ladoA > ladoC)
    {
        maior = ladoA;
        if (ladoB > ladoC)
        {
            meio = ladoB;
            menor = ladoC;
        }
        else
        {
            meio = ladoC;
            menor = ladoB;
        }
        
    }
    else if (ladoB > ladoA && ladoB > ladoC)
    {
        maior = ladoB;
        if (ladoA > ladoC)
        {
            meio = ladoA;
            menor = ladoC;
        }
        else
        {
            meio = ladoC;
            menor = ladoA;
        }
        
    }
    else if (ladoC > ladoA && ladoC > ladoB)
    {
        maior = ladoC;
        if (ladoA > ladoB)
        {
            meio = ladoA;
            menor = ladoB;
        }
        else
        {
            meio = ladoB;
            menor = ladoA;
        }
        
    }

    // A condição de existência de um triângulo é que a soma de seus dois menores segmentos seja superior ao maior lado
        // No caso de não ser um triângulo...
    if ((menor + meio) <= maior)
    {
        // Calculo a área de um trapézio conforme o exercício solicita, devolvendo a resposta ao usuário com apenas uma casa decimal
        area = ((ladoA + ladoB) * ladoC) / 2;
        printf("Area = %.1f\n", area);
    }
        // No caso de ser um triângulo...
    else
    {
        // Calculo seu perímetro conforme solicitado no exercício, novamente devolvendo a resposta com apenas uma casa decimal
        perimetro = ladoA + ladoB + ladoC;
        printf("Perimetro = %.1f\n", perimetro);
    }
    
    return 0;
}
