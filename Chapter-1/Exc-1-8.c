#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    int c, tab = 0, new_line = 0, space = 0;
    while((c = getchar())!= EOF)
    {
        if(c == 10)
        {
            new_line++;
            printf("New Line\n");
        }else if( c == 9)
        {
            tab++;
            printf("Tab\n");
        }else if(c == 32)
        {
            space++;
            printf("Space\n");
        }
    }

    printf("New Line: %d\nTab: %d\nSpace: %d\n", new_line, tab, space);
}
