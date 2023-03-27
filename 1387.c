/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Loop Musical
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned short int maoEsquerda = 0, maoDireita = 0;

    system("cls");

    do
    {
        maoEsquerda = 0;
        maoDireita = 0;
        scanf("%hu %hu", &maoEsquerda, &maoDireita);
        if (maoEsquerda == 0 && maoDireita == 0) break;
        if (maoEsquerda > 5 || maoDireita > 5) continue;

        printf("%hu\n", maoEsquerda+maoDireita);
        
    } while (maoEsquerda != 0 && maoDireita != 0);

    return 0;
}
