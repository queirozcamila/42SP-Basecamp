#include <unistd.h>

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	n[1] = '1';
	n[2] = '2';
	while (n[0] <= '7')
	{
		while (n[1] <= '8')
		{
			while (n[2] <= '9')
			{
				if ((n[0] == '7') && (n[1] == '8') && (n[2] == '9'))
					write(1, "789", 3);
				else
				{
					write(1, &n, 3);
					write(1, ", ", 2);
				}
				n[2]++;
			}
			n[2] = ++n[1] + 1;
		}
		n[1] = ++n[0] + 1;
		n[2] = n[1] + 1;
	}
}
