#include <stdio.h>

void func()
{
    static int i = 0;
    //int i = 0;
    printf("%d \n",i);
    i++;
}

int main()
{
    for(int i = 0; i < 5; i++)
    {
        func();
    }
}