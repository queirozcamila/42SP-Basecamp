int	ft_iterative_factorial(int nb)
{
	int	result;
	int	n;

	n = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
