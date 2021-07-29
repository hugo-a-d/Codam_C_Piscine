#include <unistd.h>
void	putchar(char phi, char psi, char chi, char tau)
{
	write(1, &phi, 1);
	write(1, &psi, 1);
	write(1, " ", 1);
	write(1, &chi, 1);
	write(1, &tau, 1);
	if (phi <= '9')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	phi;
	char	psi;
	char	chi;
	char	tau;

	phi = '0';
	while (phi <= '9')
	{
		psi = phi + 1;
		while (psi <= '9')
		{
			chi = psi + 1;
			while (chi <= '9')
			{
				tau = chi + 1;
				while (tau <= '9')
				{
					putchar(phi, psi, chi, tau);
					tau++;
				}
				chi++;
			}
			psi++;
		}
		phi++;
	}
}
// the issues once phi = 6 it cannot iterate any more. the issue is based on the nu,ber of iterations. 
int	main(void)
{
	ft_print_comb();
	return (0);
}
