#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_strncat.c"
#include "ft_strcmp.c"
#include "headers/header.h"

void	insert(struct hash_table *hash, char key, char *value);

void    read_file(int fd)
{
    char    c;
    char    line[1024];
    char    verbalNumber[1024];
    char    number[1024];
    int     i;
    int     foundSpace;
    i = 0;
    while ((read(fd, &c, 1) == 1))
    {
        i++;
        line[i] = c;
        if (c == '\n')
        {
            break ;
        }
    }
    line[i] = '\0'; 
    foundSpace = 0;
    i = 1;
    while(line[i] != '\0')
    {
        if (line[i] == ' ')
        {
            foundSpace = 1;
        }
        if (foundSpace == 1)
        {
            ft_strncat(verbalNumber, &line[i], 1);
        }
        if (line[i] != ':' && line[i] != ' ' && foundSpace != 1)
        {
            ft_strncat(number, &line[i], 1);
        }
        i++;
    }
	insert(hash, number, verbalNumber);
	read_file(fd);
}
void    open_file()
{
    int fd;
    fd = open("numbers.dict.txt", O_RDONLY);
    if(fd == -1)
    {
        printf("Failed to open file");
    }
    read_file(fd);
}
