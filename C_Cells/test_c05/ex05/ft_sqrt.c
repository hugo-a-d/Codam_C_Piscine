int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb > 46341)
		return (0);
	else if (nb == 0 || nb == 2)
		return (0);
	else if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_sqrt(1));
// }
