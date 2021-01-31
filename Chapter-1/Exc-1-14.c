#include <stdio.h>
#include <stdlib.h>






int main(void)
{
    int c, char_num = 0;
    int number_of_char[255];

    for(int i = 0; i < 255; i++)
    {
        number_of_char[i] = 0;
    }


    while((c = getchar()) != EOF)
    {
        number_of_char[c] += 1;
    }


    for(int i = 0; i < 255; i++)
    {
        if(number_of_char[i] > 0)
        {
            printf("Character %c:\n", i);
            for(int j = 0; j < number_of_char[i]; j++)
            {
                printf("-");
            }
            printf("\n");
        }
    }






}

