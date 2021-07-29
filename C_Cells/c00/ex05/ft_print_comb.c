#include <unistd.h>
void	ft_putchar(char phi, char psi, char chi)
{
	write(1, &phi, 1);
	write(1, &psi, 1);
	write(1, &chi, 1);
	if (phi < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	phi;
	char	psi;
	char	chi;

	phi = '0';
	while (phi <= '7')
	{
		psi = phi + 1;
		while (psi <= '8')
		{
			chi = psi + 1;
			while (chi <= '9')
			{
				putchar(phi, psi, chi);
				chi++;
			}
			psi++;
		}
		phi++;
	}
}
