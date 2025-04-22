#include "libft.h"

static void	ft_putnbr_recursive(long n, int fd)
{
	if (n >= 10)
		ft_putnbr_recursive(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	ft_putnbr_recursive(nb, fd);
}