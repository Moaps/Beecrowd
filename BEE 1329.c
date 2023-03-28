/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Cara ou coroa
*/

#include <stdio.h>
#include <stdlib.h>

#define cara 0
#define coroa 1


int main(){
    unsigned short int qtdJogos = 0, face = 0, contador = 0, vitoriasMaria = 0, vitoriasJoao = 0;

    while (1)
    {
        contador = 0;
        scanf("%hu", &qtdJogos);
      
        if (qtdJogos == 0)
            break;            // If the inputed games amount is 0, the code is terminated
        else if (qtdJogos > 1000 || qtdJogos < 1)
            break;           // If the inputed games amount is greater than 1000 or lesser than 1, the code jumps to the next iteration, forcing the user to input a value between those ranges
        
        do
        {
            scanf("%hu", &face);
            if (face != 1 && face != 0)
                continue;

            if (face == cara)
            {
                vitoriasMaria++;
            }
            else
            {
                vitoriasJoao++;
            }
            
            contador++;
        } while (contador < qtdJogos);

        printf("Mary won %hu times and John won %hu times\n", vitoriasMaria, vitoriasJoao);
        vitoriasMaria = 0;
        vitoriasJoao = 0;
    }

    system("cls");

    return 0;
}
