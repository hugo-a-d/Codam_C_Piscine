#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *st)
{
	int	count;

	count = 0;
	while (st[count] != '\0')
	{
		ft_putchar(st[count]);
		count++;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char s[] = "What is love";
// 	ft_putstr(s);
// }
