#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



int row = 10;
int column = 100;

int main(void)
{
	int x = 0;
	while (x < row)
	{
		int y = 0;
		while (y < column)
		if (y == 5 || y == 6 || y == 7)
		{
			printf("I");
			++y;
		}
		else if (y == 4 && x == 0 )
		{
			printf("I");
			++y;
		}
		else if (y == 8 && x == 0 )
		{
			printf("I");
			++y;
		}
		else if (y == 4 && x == 10 )
		{
			printf("I");
			++y;
		}
		else if (y == 8 && x == 10 )
		{
			printf("I");
			++y;
		}
		else
		{
			printf("*");
			++y;
		}
		printf("\n");
		x++;
	}
	return(0);
}
