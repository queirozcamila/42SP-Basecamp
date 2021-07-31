void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	resto;

	if (*b != 0)
	{
		div = *a / *b;
		resto = *a % *b;
		*a = div;
		*b = resto;
	}
}
