unsigned int	ft_size(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	contador;

	i = 0;
	contador = 0;
	if (size == contador)
	{
		return (ft_size(src));
	}
	while (src[i] != '\0' && contador < size - 1)
	{
		dest[i] = src[i];
		contador++;
		i++;
	}
	dest[i] = '\0';
	return (ft_size(src));
}
