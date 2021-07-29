int	ft_atoi(char *str)
{
	int	result;
	int	count;
	int	neg_num;

	count = 0;
	neg_num = 1;
	result = 0;
	while (str[count] == '\t' || str[count] == '\n' || str[count] == '\v' || \
	str[count] == '\f' || str[count] == '\r' || str[count] == ' ')
		count++;
	while (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			(neg_num *= -1);
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = (str[count] - '0') + (result * 10);
		count++;
	}
	return (result * neg_num);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	str[] = " +--+-123ab4567";
// 	printf("%d", ft_atoi(str));
// 	return (0);
// }
// 