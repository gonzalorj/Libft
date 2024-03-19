#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	long nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar_fd('-', fd);
	}
	else if (nbr < 10)
	{
		ft_putchar_fd(nbr + '0', fd);
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
}