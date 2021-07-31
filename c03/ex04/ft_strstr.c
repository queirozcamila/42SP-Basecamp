unsigned int	ft_size(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	size_to_find;
	unsigned int	aux;

	i = 0;
	size_to_find = ft_size(to_find);
	if (to_find[i] == 0)
		return (str);
	while (str[i] != '\0')
	{
		aux = 0;
		while (str[i + aux] == to_find[aux])
		{	
			if (aux == (size_to_find - 1))
				return (&str[i]);
			aux++;
		}
		i++;
	}
	return (0);
}
