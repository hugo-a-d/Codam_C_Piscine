//ex00

int	main(void)
{
	char	dest[] = "Hello";
	char	src[] = "World!";
	printf("%s", dest);
	printf("%s", src);
	printf("\n");
	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}

//ex01

int	main(void)
{
	char	dest[7];
	char	src[] = "Worldqflisubviouvhweovb";

	ft_strncpy(dest, src, 7);
	printf("%s", dest);
	return (0);
}

//ex02

int	main(void)
{
	char	a;

	a = ft_str_is_alpha("Over");
	write(1, &a, 1);
}


//ex03

int	main(void)
{
	char	n;

	n = ft_str_is_numeric("hell");
	write(1, &n, 1);
}

//ex04

int	main(void)
{
	char	lower;

	lower = ft_str_is_lowercase("Whatislove");
	write(1, &lower, 1);
}


//ex05

int	main(void)
{
	char	upper;

	upper = ft_str_is_uppercase("oVERNINETHOUSAND");
	write(1, &upper, 1);
}

//ex06


int	main(void)
{
	char	print;

	print = ft_str_is_printable("!a!!!!!");
	write(1, &print, 1);
}

//ex07

int main(void)
{
    char    a[]= "icanbeyourhero";
    ft_strupcase(a);
    printf("%s", a);
}

//ex08

int	main(void)
{
	char	string[] = "WHAT IS LOVE";
	ft_strlowcase(string);
	printf("%s", string);
}