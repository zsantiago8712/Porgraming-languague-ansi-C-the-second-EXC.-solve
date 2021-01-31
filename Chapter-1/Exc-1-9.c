#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>




int main(void)
{
    int c;
    bool space = false; 

    while((c = getchar())!= EOF)
    {
        if(c == 32 && space == false)
        {
            space = true;
            printf("%c", c);
        }
        else if(c == 32 && space == true)
        {
            space = true;
        }
        else
        {
            space = false;
            printf("%c", c);
        }
    }
}