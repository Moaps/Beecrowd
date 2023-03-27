/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Og
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
        if (maoEsquerda == 0 && maoDireita == 0) break; // If the user inputs a 0 in both left and right hand, the code terminates
        if (maoEsquerda > 5 || maoDireita > 5) continue; // If the user inputs a value greater than 6, the loop jumps to the next iteration, forcing a new input

        printf("%hu\n", maoEsquerda+maoDireita);
        
    } while (maoEsquerda != 0 && maoDireita != 0);

    return 0;
}
