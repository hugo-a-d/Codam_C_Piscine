#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	matrix(int *matrix, int m, int n)
{
	int	i;
	int	j;
	//int	matrix[4][4] = {12, 23, 25, 27, 13, 16, 18, 25};
	//int	value;
	//value = 3;
	i = 0;
	j = 0;
	while (i <= m)
	{
		//if (i < value)
		j = i;
		while (j <= n)
		{
			printf("%d\t", *((matrix+i*n)+j));
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

	matrix = {12, 23, 25, 27, 13, 16, 18, 25};
	m = 4;
	n = 4;
	matrix(matrix, m, n);
	return (0);
}
