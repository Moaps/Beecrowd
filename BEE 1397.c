/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Loop Musical
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short int qtdJogos = 0, contador = 0, jogadorUm = 0, jogadorDois = 0, vitoriaUm = 0, vitoriaDois = 0;

    system("cls");

    while (1)
    {
        contador = 0;
        scanf("%hu", &qtdJogos);
        if (qtdJogos == 0) // If the user inputs a 0 as the games quantity, the code will be terminated
            break;
        
        do
        {
            scanf("%hu %hu", &jogadorUm, &jogadorDois);
            if (jogadorUm > 10 || jogadorDois > 10 || jogadorUm < 0 || jogadorDois < 0) // If any of the inputs is greater than 10 or lesser than 0, the code will jump into the next loop iteration
                continue;

            if (jogadorUm > jogadorDois)
            {
                vitoriaUm++;
            }
            else if (jogadorDois > jogadorUm)
            {
                vitoriaDois++;
            }
            
            contador++;
        } while (contador < qtdJogos);

        printf("%hu %hu\n", vitoriaUm, vitoriaDois);
        vitoriaUm = 0;
        vitoriaDois = 0;
    }

    return 0;
}
