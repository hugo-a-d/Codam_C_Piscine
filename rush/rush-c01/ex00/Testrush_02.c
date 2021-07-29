#include <unistd.h>
#include <stdlib.h>

void	ft_putgridslot(int x)
	{
		write(1, &x, 1);
	}


int skyscrapergrid[4][4] ={
	{1, 2, 3, 4},
	{2, 3, 4, 1},
	{3, 4, 1, 2},
	{4, 1, 2, 3}
};
	
int main()
{
	ft_putgridslot(skyscrapergrid[0][0]);
	write(1, skyscrapergrid, 1);
	return (0);
}
