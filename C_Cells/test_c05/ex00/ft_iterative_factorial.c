int	ft_iterative_factorial(int nb)
{
	int	number;
	int	temp;

	number = nb;
	temp = nb - 1;
	if (number == 0)
		return (1);
	else if (number < 0)
		return (0);
	while (temp != 0)
	{
		number = (number * temp);
		temp --;
	}
	return (number);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(6));
// }
