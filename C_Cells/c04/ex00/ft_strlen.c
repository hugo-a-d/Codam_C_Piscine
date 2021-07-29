int	ft_strlen(char *st)
{
	int	count;

	count = 0;
	while (st[count] != '\0')
	{
		count++;
	}
	return (count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d", ft_strlen("Helloworl"));
// }
