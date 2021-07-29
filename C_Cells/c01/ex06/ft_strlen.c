int	ft_strlen(char *st)
{
	int	count;

	count = 0;
	while (st[count] != '\0')
	{
		count++;
	}
	return (count);
}
