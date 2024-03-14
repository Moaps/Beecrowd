/*
    Clariana Nogueira da Silva Costa
    https://github.com/Moaps/Beecrowd

    -> Leitura Ótica
*/

#include <stdio.h>

int main(){
    int qty = 0, count = 0, answers[4];
    
    do
    {
        scanf("%d", &qty);

        for (count = 0; count < qty; count++)
        {
            scanf("%d %d %d %d %d", &answers[0], &answers[1], &answers[2], &answers[3], &answers[4]);
            checkAnswer(answers);
        }
        

    } while (qty > 0);
    
    return 0;
}

void checkAnswer(int array[4]){
    int countFilled = 0, saveCount = 0;
    char arrayLetters[4] = {'A', 'B', 'C', 'D', 'E'};

    for (int count = 0; count < 5; count++)
    {
        if (array[count] <= 127)
        {
            saveCount = count;
            countFilled++;
        }
        
        if (count == 4 && countFilled == 1)
        {
            printf("%c\n", arrayLetters[saveCount]);
        }
        else if (count == 4)
        {
            printf("*\n");
        }
        
    }
    
}
