/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 14:16:06 by fech-cha          #+#    #+#             */
/*   Updated: 2021/12/18 14:30:48 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int ft_getchar_fd(int fd)
{
    char buffer[1];
    int n ;
    n = read(fd,buffer,1);
    return (buffer[0]);
} 

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
char *ft_getline(int fd)
{
    int c,i;
    char *str;

    str = (char *)malloc(1000);

    i = 0;
    while ((c = ft_getchar_fd(fd)) != EOF && c != '\n')
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

char    *get_next_line(int fd)
{
    char    *str;
    


}
int main()
{
    //char *str;
    int fd;
    fd = open("/Users/fech-cha/Desktop/42Cursus/Cursus_project/GetNextLine/Prep/poe.txt",O_RDONLY);
    /*for(int i = 0; i < 5; i++)
    {
        str = strdup(ft_getline(fd));
        printf("%s",str);
    }*/
    for(int i = 0; i < 5;i++)
    {
        printf("%d\n",ft_linelen(fd));
    }
    
    return (0);
}
