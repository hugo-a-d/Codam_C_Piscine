#include <unistd.h>
#include <stdlib.h>

void	write_row(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, " ", 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, " ", 1);
	write(1, &d, 1);
	write(1, "\n", 1);
}

void	ft_swapout(void)
{
	int	*nbr;
	int	i;
	int	temp;

	nbr = malloc(5 * sizeof(int));
	i = 0;
	*(nbr + 0) = '1';
	*(nbr + 1) = '2';
	*(nbr + 2) = '3';
	*(nbr + 3) = '4';
	while (i != 4)
	{
		write_row(*(nbr + 0), *(nbr + 1), *(nbr + 2), *(nbr + 3));
		temp = *(nbr + 0);
		*(nbr + 0) = *(nbr + 1);
		*(nbr + 1) = *(nbr + 2);
		*(nbr + 2) = *(nbr + 3);
		*(nbr + 3) = temp;
		i++;
	}
}
