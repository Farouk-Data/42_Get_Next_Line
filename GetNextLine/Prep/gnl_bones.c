#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/*
int ft_linelen(int fd)
{
    int count;
    int c;

    count = 0;
    while ((c = ft_getchar_fd(fd)) != EOF && c != '\n')
    {
        count++;
    }
    return (count);
}
*/
int getchar_fd(int fd)
{
    char buffer[1];
    int n ;
    n = read(fd,buffer,1);
    return (buffer[0]);
}

char *gnl(int fd)
{
    int c,i;
    static char *str;

    str = (char *)malloc(1000);

    i = 0;
    while ((c = getchar_fd(fd)) != EOF && c != '\n')
    {
        str[i++] = c;
    }
    if (c == '\n')
    {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    return (str);
}
int main()
{
    char *str;
    int fd;
    fd = open("poe.txt",O_RDONLY);
    str = (char *)malloc(100); 
    str = gnl(fd);
    printf("%s",str);
    return (0);
}