int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	contador;
	int	size;

	i = 0;
	contador = 0;
	size = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
			contador++;
		size++;
		i++;
	}
	if (size != contador)
	{
		return (0);
	}
	return (1);
}
