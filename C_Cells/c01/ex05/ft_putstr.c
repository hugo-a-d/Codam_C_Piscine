#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *st)
{
	int	count;

	while (st[count] != '\0')
	{
		ft_putchar(st[count]);
		count++;
	}
}
