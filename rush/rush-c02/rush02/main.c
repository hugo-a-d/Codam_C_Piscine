#include "headers/header.h"

int	main(int argc, char **str)
{
	int	number;
	int	i;

	// write error if there are less then 1 or more then 2 arguments.
	if (argc == 2 || argc == 3)
	{	
		i = 0;
		while (str[1][i] != '\0')
		{
			if (!(str[1][i] >= '0' && str[1][i] <= '9'))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		number = ft_atoi(str[1]);
		printf("String value = %s, Int value = %d\n", str[1], number);
		make_numb_index(number);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
