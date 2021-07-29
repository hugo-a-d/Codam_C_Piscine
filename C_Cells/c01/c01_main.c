#include <unistd.h>
#include <stdio.h>
//ex00

int	main(void)
{
	int	a;

	ft_ft(&a);
	//printf("%d", a);
	write(1, &a, 1);
}

//ex01

int	main(void)
{
	int store;
	int	*a1;
	int	**a2;
	int	***a3;
	int	****b1;
	int	*****b2;
	int	******b3;
	int	*******c1;
	int	********c2;
	int	*********c3;

	a1 = &a2;
	a2 = &a3;
	a3 = &b1;
	b1 = &b2;
	b2 = &b3;
	b3 = &c1;
	c1 = &c2;
	c2 = &c3;
	c3 = &store;
	ft_ultimate_ft(&c3);
	printf("%d", c3);
	return (0);
}

//ex02

int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	printf("%d %d\n", x, y);
	ft_swap(&x, &y);
	printf("%d %d\n", x, y);
}

//ex03

int	main(void)
{
	int	div_store;
	int	mod_store;
	ft_div_mod(1, 1337, &div_store, &mod_store);
	printf("%d %d\n", div_store, mod_store);
}

//ex04

int	main(void)
{
	int	x;
	int	y;

	x = 50;
	y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d %d \n", x, y);
}


//ex05


int	main(void)
{
	ft_putstr("Over 9000");
	return (0);
}

//ex06

void	ft_putchar(char c)
{
	//write(1, &c, 1);
	printf("%d", c);
}

int	main(void)
{
	int	a;

	a = 0;
	a = ft_putstr("Over 9000");
	ft_putchar(a);
	return (0);
}
