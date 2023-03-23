/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Nglonia
*/

#include <stdio.h>
#include <stdlib.h>

#define x 0
#define y 1

int main()
{
    system("cls");
    int numConsultas = 1, contador = 0, coordenadasDivisor[2] = {0, 0}, coordenadasCasa[2] = {0, 0};

    while (1)
    {
        scanf("%d", &numConsultas);
        if (numConsultas == 0) break;
        
        scanf("%d %d", &coordenadasDivisor[x], &coordenadasDivisor[y]);

        do
        {
            scanf("%d %d", &coordenadasCasa[x], &coordenadasCasa[y]);

            coordenadasCasa[0] = coordenadasCasa[x] - coordenadasDivisor[x];
            coordenadasCasa[1] = coordenadasCasa[y] - coordenadasDivisor[y];

            if (!coordenadasCasa[x] || !coordenadasCasa[y]) printf("divisa");
            else 
            {
                if (coordenadasCasa[y] > 0) printf("N"); else printf("S");
                if (coordenadasCasa[x] > 0) printf("E"); else printf("O");
            }
            
            printf("\n");

            contador++;
        } while (contador < numConsultas);
        

        contador = 0;

    }

    return 0;
}
