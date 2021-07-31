#include <unistd.h>
void	ft_putnbr(int nb)
{
	unsigned int	a;
	unsigned int	b;
	unsigned int	temp_nb;
	char			neg;

	temp_nb = nb;
	a = 1;
	neg = '-';
	if (nb < 0)
	{
		temp_nb = temp_nb * -1;
		write(1, &neg, 1);
	}
	while (a <= (temp_nb / 10))
		a = a * 10;
	while (a >= 1)
	{
		b = temp_nb / a;
		b = b + '0';
		temp_nb = temp_nb % a;
		a = a / 10;
		write (1, &b, 1);
	}
}
