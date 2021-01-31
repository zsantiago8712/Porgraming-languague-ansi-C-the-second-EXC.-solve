#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    float fahrenheit = 0, celsius = 0;

    for(celsius; celsius <= 300; celsius+= 20)
    {
        fahrenheit = (celsius * 9/5) + 32;
        printf("C%.0f      |F%.3f\n", celsius, fahrenheit);
    }

}