char	*ft_strcat(char *dest, char *src)
{
	int		i;
	char	*cat;

	i = 0;
	cat = dest;
	while (*dest)
		dest++;
	while (src[i] != '\0')
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (cat);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	string1[] = "string1eco;jwuchlw;EFOH";
// 	char	string2[] = "string2dfljnadlo;vnarol";
// 	printf("%s", ft_strcat(string2, string1));
// }
