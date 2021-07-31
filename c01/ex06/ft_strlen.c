int	ft_strlen(char *str)
{
	int	i;
	int	contador;

	i = 0;
	contador = 0;
	while (str[i] != '\0')
	{
		i++;
		contador ++;
	}
	return (contador);
}
