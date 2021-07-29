#include <unistd.h>
void	putchar(char phi, char psi) //char chi, char tau)
{
	write(1, &phi, 2);
	write(1, &psi, 2);
	write(1, " ", 1);
	//if (phi <= '9')
	//{
	//	write(1, ", ", 2);
	//}
}

void	ft_print_comb(void)
{
	char	phi;
	char	psi;

	phi = '0';
	while (phi <= '9')
	{
		psi = phi + 1;
		while (psi <= '9')
		{
			putchar(phi, psi);
			psi++;
		}
		phi++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}