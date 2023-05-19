/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Receita de Bolo

*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int qtdFarinha = 0, qtdOvos = 0, qtdLeite = 0, totalBolos = 0;

    // Loop para descobrir se os inputs respeitam a rega 0 < x <= 100
    while (1)
    {
        if (qtdFarinha < 1 || qtdFarinha > 100)
        {
            if (qtdOvos < 1 || qtdOvos > 100)
            {
                if (qtdLeite < 1 || qtdLeite > 100)
                {
                    scanf("%i %i %i", &qtdFarinha, &qtdOvos, &qtdLeite);
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
        else
        {
        break;
        }
    }

    while(1)
    {
        qtdFarinha -= 2;
        qtdOvos -= 3;
        qtdLeite -= 5;

        if (qtdFarinha < 0 || qtdOvos < 0 || qtdLeite < 0)
        {
            break;
        }
        else
        {
            totalBolos++;
        }
    }

    printf("%i\n", totalBolos);

    return 0;
}
