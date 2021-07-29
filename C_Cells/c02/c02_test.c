#include <unistd.h>

//void	displaystring(char	str[])
//{
//	write(1, &str, 11);
//}

int	main(void)
{
	char	a[] = "Hello World!\n";
	write(1, &a, 13);
}