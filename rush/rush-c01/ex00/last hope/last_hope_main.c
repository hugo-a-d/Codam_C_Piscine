#include <unistd.h>
#include <stdlib.h>

void	ft_swapout(void);

int	main(void)
{
	int	i;

	i = 3;
	if (i == 3)
	{
		ft_swapout();
	}
	else
	{
		write(1, "Error\n", 6);
	}
}
