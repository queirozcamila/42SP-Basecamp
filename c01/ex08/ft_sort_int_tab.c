#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	count_rep;
	int	aux;

	count_rep = 0;
	while (count_rep < size)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				aux = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = aux;
			}
			i++;
		}
		count_rep++;
	}	
}
