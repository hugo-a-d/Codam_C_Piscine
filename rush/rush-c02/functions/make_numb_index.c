#include <stdio.h>
#include "../headers/header.h"


int make_numb_index(int num)
{
	int	i;
	int index;
	int number;
	int temp_num;

	i = 0;
	index = 0;
	temp_num = num;
	while (temp_num != 0)
	{
		temp_num = temp_num / 10;
		index++;
	}
	while (0 < index)
	{
		number = make_round_numbers(num, index);
		i++;
		index--;
		printf("%d\n", number);//call next function
	}
	return (number);
}

int	make_round_numbers(int num, int index)
{
	int	temp;
	int	temp_index;
	int	under20;

	temp_index = index;
	under20 = 0;
	// if (index == 1)
	// 	return (0);
	while (temp_index > 1)
	{
		// if (index == 2)
		// {
		// 	num = num % 20;
		// 	if (num < 20)
		// 	{
		// 		under20 = 1;
		// 		index = 1;
		// 	}
		// 	break ;
		// }
		num /= 10;
		temp_index--;
	}


	// if (num > 19)
		num = num % 10;
	while (index > 1 && under20 == 0)
	{
		num *= 10;
		index--;
	}
	return (num);
}

// int main()
// {
// 	int number;
// 	number = make_numb_index(3445);
// 	printf("%d", number);
// }