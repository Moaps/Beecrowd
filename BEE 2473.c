/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Loteria
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned short int jogados[6], sorteio[6], contadorJogados = 0, contadorSorteio = 0, qtdAcertos = 0;

    system("cls");

    do
    {
        scanf("%hu", &jogados[contadorJogados]);
        contadorJogados++;
    } while (contadorJogados < 6 || jogados[contadorJogados] < 1 || jogados[contadorJogados] > 99); // If any of the 6 inputed numbers are greater than 99 or lesser than 1, the user will have to rewrite it
    
    do
    {
        scanf("%hu", &sorteio[contadorSorteio]);
        contadorSorteio++;
    } while (contadorSorteio < 6 || sorteio[contadorSorteio] < 1 || sorteio[contadorSorteio] > 99); // If any of the 6 inputed numbers are greater than 99 or lesser than 1, the user will have to rewrite it

    // Loops through both arrays in order to check if theres a matching number, if there is, it increments the var qtdAcertos
    for (contadorJogados = 0; contadorJogados < 6; contadorJogados++)
    {
        for (contadorSorteio = 0; contadorSorteio < 6; contadorSorteio++)
        {
            if (jogados[contadorJogados] == sorteio[contadorSorteio])
            {
                qtdAcertos++;
            }
            
        }
        
    }

  // Switches between the amount of right numbers, printing the equivalent text (3 = terno, 4 = quadra, 5 = quina, 6 = sena and defaults azar)
    switch (qtdAcertos)
    {
    case 3:
        printf("terno\n");
        break;
    
    case 4:
        printf("quadra\n");
        break;
    
    case 5:
        printf("quina\n");
        break;

    case 6:
        printf("sena\n");
        break;

    default:
        printf("azar\n");
        break;
    }

    return 0;
}
