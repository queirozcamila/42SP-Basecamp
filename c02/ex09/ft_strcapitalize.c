char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{	
			if (str[i] >= 32 && str[i] <= 47)
				str[i + 1] = str[i + 1] - 32;
			else if (str[i] >= 58 && str [i] <= 64)
				str[i + 1] = str[i + 1] - 32;
			else if (str[i] >= 91 && str[i] <= 96)
				str[i + 1] = str[i + 1] - 32;
			else if (str[i] >= 123 && str[i <= 126])
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
