#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	matrix(int *matrix, int m, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= m)
	{
		j = i;
		while (j <= n)
		{
			printf("%d\t", &(matrix)i+j));
			printf("\n");
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	matrix[4][4];
	int	m;
	int	n;

	matrix = {};
	m = 4;
	n = 4;
	matrix(matrix, m, n);
	return (0);
}
