#include <stdio.h>
#include <stdlib.h>

int conversion(int celsius);

int main(void)
{
    float celsius = 0;
    for(celsius; celsius <= 300; celsius+= 20)
    {
        printf("C%.0f      |F%.3f\n", celsius, conversion);
    }

}

int conversion(int celsius)
{
    return (celsius * 9/5) + 32;
}
