#include <stdio.h>
#include <strings.h>

char *ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		char	*string = str;
		char	*intersect = to_find;

		while (*str && *intersect && *str == *intersect)
		{
			str++;
			intersect++;
		}
		if (!*intersect)
		{
		return (string);
		}
		str = string + 1;
	}
	return NULL;
}

//int	main(void)
//{
//	char s1 [] = "helloworld";
//	char s2 [] = "hello";
//	printf ("%s\n", ft_strstr(s1, s2));
//	return (0);
//}