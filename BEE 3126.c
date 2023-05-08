/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Lista de Treinamento
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int candidatos = 0, qtdPresentes = 0, identificador = 0, contador = 0;

    scanf("%d", &candidatos);

    while (contador < candidatos)
    {
        do
        {
            scanf("%d", &identificador);
        } while (identificador != 0 && identificador != 1);
        
        if (identificador == 1)
        {
            qtdPresentes++;
        }
        
        contador++;
    }

    printf("%d\n", qtdPresentes);
    
    return 0;
}
