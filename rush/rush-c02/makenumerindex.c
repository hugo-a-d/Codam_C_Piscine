#include <stdio.h>
//#include "../headers/header.h"


int make_numb_index(int num)
{
	int	i;
	int	index;
	int	number;
	int	temp_num;
	int is_under20;

	i = 0;
	index = 0;
	temp_num = num;
	is_under20 = is_number_under20(num);
	while (temp_num != 0)
	{
		temp_num = temp_num / 10;
		index++;
	}
	//is_under20 = is_number_under20(number);
	
	while (0 < index)
	{
		if (index == 2 && is_under20 == 1)
		{
			number = number_under20(num);
			if (number != 0)
				printf("%d\n", number);
			break ;
		}
		number = make_round_numbers(num, index);
		i++;
		index--;
		
		if (number != 0)
			printf("%d\n", number);//call next function
		
			
	}
	return (number);
}

int is_number_under20(int num)
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
int number_under20(int num)
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

 int main()
 {
 	int number;
 	number = make_numb_index(20);
 	//printf("%d", number);
 }