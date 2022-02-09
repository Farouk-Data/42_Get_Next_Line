#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int fd,fd2;
    static char *str;
    str = (char *)malloc(10000);

    fd = open("poe.txt",O_RDONLY);
    if (fd < 0)
    {
        perror("Error: ");
        exit(1);
    }
    for(int i = 0; i < 5; i++)
    {
        fd2 = read(fd,str,30);
        printf("%s",str);
    }
    return (0);
}