#include <stdio.h>
#include <stdlib.h>



int main(void)
{
    int fahr = 300;
    float cel = 0;

    for(fahr; fahr >= 0; fahr -= 20)
    {
        cel = (fahr - 32) * (5.0/9.0);
        printf("|  %d  |  %.3f |\n", fahr, cel);
    }
}