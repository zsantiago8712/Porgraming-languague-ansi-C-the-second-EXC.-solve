#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    int c, wordlenght = 0, number_words = 0;
    int wordslenght[20];
    while((c = getchar())!= EOF)
    {
        if(c == 10||c == 9 ||c == 32)
        {
            wordslenght[number_words] = wordlenght;
            number_words++;
            wordlenght = 0;
            if(c == 10)
            {
                break;
            }
        }
        else
        {
            wordlenght++;
        }
    }


    for(int i = 0; i <= number_words - 1; i++)
    {
        printf("Palabra %d: \n", i + 1);

        for(int j = 0; j < wordslenght[i]; j++)
        {
            printf("-");
        }
        printf("\n");   
    }
}


