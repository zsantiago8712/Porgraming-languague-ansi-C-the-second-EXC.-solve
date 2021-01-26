#include <stdio.h>
#include <stdlib.h>


void main (void)
{
    float fahrenheit, celsius;
    scanf ("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("%.1f", fahrenheit);
}