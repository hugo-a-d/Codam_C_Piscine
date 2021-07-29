#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

void	remove_white_space(char* s)
{
	int	n;
	int	count;

	n = 0;
	count = 0;
	if (NULL == p)
		return (0);
	while (n < ft_strnlen(p))
	{
		if (p[count] != '' || p[count] != '\n')
	}
}

int	main(void)
{
	// we need it to be an int data type for the file variable
	int	o_file;
	char	c[1000];

	//open keyword and its parameters
	o_file = open("numbers.dict.txt", O_RDONLY);
	// incase it fails exit and print a statement
	if (o_file == -1)
	{
		printf("Failed to create and open the file. \n");
		exit(1);
	}
	read(o_file, c, 1000);
	c[999] = '\0';
	//close keyword and the file varaible
	close(o_file);
	printf("c: %s\n", c);

	return (0);
}
