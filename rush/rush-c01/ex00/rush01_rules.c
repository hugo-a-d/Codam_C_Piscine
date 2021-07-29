#include <unistd.h>
#include <stdlib.h>

void	ft_tootoo(void)
{
	
}

int	main(void)
{
	int	row1right;
	int	row1left;
	int	i;

	i = 0;
	row1left = 2;
	row1right = 2;
	while (i != 1)
	{
		if (row1left == 4 && row1right == 1)
		{
			write(1, "4321", 4);
		}
		else if (row1left == 1 && row1right == 4)
		{
			write(1, "1234", 4);
		}
		else if (row1left == 3 && row1right == 1)
		{
			write(1, "1324", 4);
		}
		else if (row1left == 1 && row1right == 3)
		{
			write(1, "4231", 4);
		}
		else if (row1left == 2 && row1right == 1)
		{
			write(1, "3214", 4);
		}
		else if (row1left == 1 && row1right == 2)
		{
			write(1, "4123", 4);
		}
		else if (row1left == 3 && row1right == 2)
		{
			write(1, "2341", 4);
		}
		else if (row1left == 2 && row1right == 3)
		{
			write(1, "1432", 4);
		}
		else if (row1left == 2 && row1right == 2)
		{
			write(1, "3241", 4);
		}
		else
		{
			write(1, "Error", 5);
		}
		i++;
	}
}
