unsigned int	ft_size(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	size_dest = ft_size(dest);
	size_src = ft_size(src);
	if (size_dest > size)
		return (size_src + size);
	if (size == i)
		return (size_dest);
	if ((size_dest + size_src) > size)
	{
		while (src[i] != '\0' && (i < size))
		{
			dest[size_dest + i] = src[i];
			i++;
		}
		 while (i < size)
		{
			dest[i++] = '\0';
		}
	}
	return (size_dest + size_src);
}
