#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int main(void)
{
    int c;
    while((c = getchar())!= EOF)
    {
        if(c == 10)
        {
            printf("\\b");
        }else if( c == 9)
        {
            printf("\\t");
        }else if(c == 92)
        {
            printf("\\\\");
        }else
        {
            printf("%c", c);
        }
    }

}