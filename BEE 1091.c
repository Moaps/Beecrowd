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
    
    // Loop to scan and find which values should the program input into the the predefined variables
        // I'm using a while(true/1) loop since i'll need the user to define when to terminate the program 
    while (1)
    {
        scanf("%d", &numConsultas);
        if (numConsultas == 0) break; // Verifying if the inputed number equals to 0 or not. If it does, the loop is terminated.
        
        scanf("%d %d", &coordenadasDivisor[x], &coordenadasDivisor[y]);

        // Loop to get all coordinates and directions (divisa, NE, NO, SE, SO), respecting the limit setted previously
        do
        {
            scanf("%d %d", &coordenadasCasa[x], &coordenadasCasa[y]);
            
            // Getting the distance between the division line and house using a simple subtraction between values inside x and y axis
            coordenadasCasa[0] = coordenadasCasa[x] - coordenadasDivisor[x];
            coordenadasCasa[1] = coordenadasCasa[y] - coordenadasDivisor[y];

            // Comparing to know if the coordinate is in the division line, north, south, east or west.
            if (!coordenadasCasa[x] || !coordenadasCasa[y]) printf("divisa");
            else 
            {
                if (coordenadasCasa[y] > 0) printf("N"); else printf("S");
                if (coordenadasCasa[x] > 0) printf("E"); else printf("O");
            }
            
            printf("\n");

            contador++;
        } while (contador < numConsultas);
        
        // Resetting the counter.
        contador = 0;

    }

    return 0;
}
