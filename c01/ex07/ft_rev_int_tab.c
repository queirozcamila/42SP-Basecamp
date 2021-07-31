#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	indice_tab;
	int	temp;

	indice_tab = (size / 2);
	i = 0;
	while (i < indice_tab)
	{
		temp = tab[size - 1];
		tab[size - 1] = tab[i];
		tab[i] = temp;
		i++;
		size--;
	}
}
