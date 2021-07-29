int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] == s2[i]) && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	string1[] = "Whatislove";
// 	char	string2[] = "WhatislovE";

// 	printf("%d\n", ft_strncmp(string1, string2, 10));
// }
