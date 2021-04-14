#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int nb;

	nb = n;
	if (n < 0)
	{
		nb *= -1;
		write(fd, "-", 1);
	}
	if (nb > 9)
		ft_putnbr_fd(nb / 10, fd);
	nb %= 10;
	write(fd, &nb, 1);
}
