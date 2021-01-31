#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int c;
    while((c = getchar())!= EOF)
    {
       if(c == 10 || c == 32 || c == 9)
       {
           printf("\n");
       }else
       {
           printf("%c", c);
       } 
    }
}