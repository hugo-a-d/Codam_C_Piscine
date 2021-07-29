#include <stdio.h>
#include "headers/header.h"
//is_under20 = is_number_under20(number);

int	make_numb_index(int num)
{
	int	i;
	int	index;
	int	temp_num;
	int	is_under20;
	int	input_number;

	i = 0;
	index = 0;
	temp_num = num;
	is_under20 = is_number_under20(num);
	while (temp_num != 0)
	{
		temp_num = temp_num / 10;
		index++;
	}
	// while (0 < index)
	// {
	// 	if (index == 2 && is_under20 == 1)
	// 	{
	// 		input_number = number_under20(num);
	// 		if (input_number != 0)
	// 			printf("%d\n", input_number);
	// 		break ;
	// 	}
	// 	input_number = make_round_numbers(num, index);
	// 	i++;
	// 	index--;
	// 	if (input_number != 0)
	// 		printf("%d\n", input_number);//call next function
	// }
	// return (input_number);
	
	return (index);
}

int	make_number_output(int num)
{
	int	i;
	int	index;
	int	is_under20;
	int	input_number;

	index = make_round_numbers(index, num);
	i = 0;
	while (0 < index)
	{
		if (index == 2 && is_under20 == 1)
		{
			input_number = number_under20(num);
			if (input_number != 0)
				printf("%d\n", input_number);
			break ;
		}
		input_number = make_round_numbers(num, index);
		i++;
		index--;
		if (input_number != 0)
			printf("%d\n", input_number);//call next function
	}
	return (input_number);
}

int	is_number_under20(int num)
{
	num = num % 100;
	if (num < 20)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	number_under20(int num)
{
	num = num % 100;
	if (num < 20)
	{
		return (num);
	}
	else
	{
		return (0);
	}
}

int	make_round_numbers(int num, int index)
{
	int	temp;
	int	temp_index;

	temp_index = index;
	while (temp_index > 1)
	{
		num /= 10;
		temp_index--;
	}
	num = num % 10;
	while (index > 1)
	{
		num *= 10;
		index--;
	}
	return (num);
}

int	main(void)
{
	int	input_number;

	input_number = make_numb_index(2000);
}
