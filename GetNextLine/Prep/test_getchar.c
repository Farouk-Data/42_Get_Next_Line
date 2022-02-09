#include <stdio.h>

int main()
{
    int c,i;
    char str[50];

    i = 0;
    while ((c = getchar()) != EOF)
    {
        str[i++] = c;
    }
    printf("%s\n",str);
    return (0);
}