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
