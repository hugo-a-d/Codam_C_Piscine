#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int const columns = 4;
	int const rows = 4;
	int skyscrapergrid[rows][columns] ={
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3}
	};
	int i = 0;
	while (i < rows)
	{
		int j = 0;
		while (j < columns)
			{
				printf("%d ", skyscrapergrid[i][j]);
				j++;
			}
		printf("\n");
		i++;
	}
	return (0);
}

