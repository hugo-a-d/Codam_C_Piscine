#include <stdio.h>
#include "../headers/header.h"

int	check_pos_neg(char *str)
{
	int	i;
	int	value;
	int	minus;

	i = 0;
	minus = -1;
	value = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			value *= minus;
		i++;
	}
	return (value);
}

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	posneg;

	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || \
	str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
	{
		i++;
	}
	posneg = check_pos_neg(str);
	while (str[i] == '-' || str[i] == '+')
	{	
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += (int)(str[i] - '0');
		i++;
	}
	return (num * posneg);
}
