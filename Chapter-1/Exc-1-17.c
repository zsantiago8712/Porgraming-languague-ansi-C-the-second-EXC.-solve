#include <stdlib.h>
#include <stdio.h>

#define MAXLINE 10

int getline_input(char line[], int limit);

int main(void)
{
    char line[MAXLINE];
    int len = 0;

    while((len = getline_input(line, MAXLINE)) > 0)
    {
        if(len > MAXLINE)
        {
            printf("%s: %d\n", line, len);
        }
    }

}


int getline_input(char line[], int limit)
{

    int c, i = 0;
    for(i; i <= limit && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }

    if(c == '\n')
    {
        line[i] = c;
        i++;
    }

    line[i] = '\0';

    return i;
}

