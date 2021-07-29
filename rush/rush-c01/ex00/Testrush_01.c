#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

 int main (void)
{
	int	size;
	size = 16;

	int array[size] = {10, 12, 41, 24, 45, 56, 86, 23, 67, 45, 87, 98, 12, 45, 56, 33};

	for	(int i = 0; i < *size; i++)
		{
		write (1 ,array[i] ,1 );
		}
    return (0);
}