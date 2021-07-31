#include <unistd.h>
int	main(int argc, char *argv[])
{
	int		i;
	char	*str;

	i = 1;
	if (argc >= 1)
	{
		while (argv[i] != '\0')
		{
			str = argv[i];
			while (*str)
			{
				write(1, str, 1);
				str++;
			}
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}
