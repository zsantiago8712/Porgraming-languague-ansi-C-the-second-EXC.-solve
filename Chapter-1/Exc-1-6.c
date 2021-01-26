#include <stdio.h>
#include <stdlib.h>



void main (void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        printf("%c", c);
        c = 0;
    }
    c = 1;
    printf("%d", c);
}