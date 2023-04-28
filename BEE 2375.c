/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Sedex
*/

#include <stdio.h>

int main()
{
    int diametroBola = 0, alturaCaixa = 0, larguraCaixa = 0, profundidadeCaixa = 0;

    // Como foi específicado pelo enunciado que a primeira linha do input tinha que ser necessáriamente UM número entre 1 e 10000, estou validando-o
    scanf("%d",&diametroBola);
    while (diametroBola >= 10000 || diametroBola < 1)
    {
        printf("\nReinsira diametroBola: ");
        scanf("%d", &diametroBola);
    }

    
    // Novamente, foi específicado pelo enunciado que a segunda linha do input tinha que ser necessáriamente TRÊS números entre 1 e 10000, estou validando-os
    scanf("%d %d %d", &alturaCaixa, &larguraCaixa, &profundidadeCaixa);
    while (alturaCaixa >= 10000 || alturaCaixa < 1 || larguraCaixa >= 10000 || larguraCaixa < 1 || profundidadeCaixa>= 10000 || profundidadeCaixa < 1)
    {
        printf("\nReinsira os dados da caixa: ");
        scanf("%d %d %d", &alturaCaixa, &larguraCaixa, &profundidadeCaixa);
    }

    // Verifica se o diâmetro é menor ou igual às medidas da caixa
    if (diametroBola <= alturaCaixa && diametroBola <= larguraCaixa && diametroBola <= profundidadeCaixa)
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
    
    return 0;
}
