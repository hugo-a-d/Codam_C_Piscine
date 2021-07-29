int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else if (power > 1)
		return (result * ft_recursive_power(nb, power - 1));
	return (result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_recursive_power(-1000, 1));
// }
