#include <unistd.h>

void	ft_printer(char n1, char n2, char n3, char n4)
{
	if ((n1 == '9') && (n2 == '8') && (n3 == '9') && (n4 == '9'))
	{
		write(1, " ", 1);
		write(1, &n1, 1);
		write(1, &n2, 1);
		write(1, " ", 1);
		write(1, &n3, 1);
		write(1, &n4, 1);
	}
	else if ((n1 < n3) || ((n1 == n3) && ((n1 + n2) < (n3 + n4))))
	{
		write(1, " ", 1);
		write(1, &n1, 1);
		write(1, &n2, 1);
		write(1, " ", 1);
		write(1, &n3, 1);
		write(1, &n4, 1);
		write(1, ",", 1);
	}
}

void	ft_print_comb2(void)
{
	char	n[4];

	n[0] = '0';
	while (n[0] <= '9')
	{
		n[1] = '0';
		while (n[1] <= '9')
		{
			n[2] = '0';
			while (n[2] <= '9')
			{
				n[3] = '0';
				while (n[3] <= '9')
				{
					ft_printer(n[0], n[1], n[2], n[3]);
					n[3]++;
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
