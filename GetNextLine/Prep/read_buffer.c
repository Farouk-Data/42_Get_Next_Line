#define BUFFER_SIZE 10
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char    *ft_getchars_fd(int fd)
{
    char buffer[BUFFER_SIZE];
    int n ;
    n = read(fd,buffer,BUFFER_SIZE);
    return (buffer);
} 
int main()
{
    char *str;
    int fd;

    fd = open("poe.txt",O_RDONLY);
    str = (char *)malloc(BUFFER_SIZE+1);
    while (str)
    str = ft_getchars_fd(fd);
    printf("%s \n",str);
    return (0);
}