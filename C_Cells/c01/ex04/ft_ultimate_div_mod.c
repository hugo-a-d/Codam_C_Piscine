void	ft_ultimate_div_mod(int *a, int *b)
{
	int	store;

	store = *a;
	*a = (*a / *b);
	*b = (store % *b);
}
