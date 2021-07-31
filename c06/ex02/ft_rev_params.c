#include <unistd.h>
int	main(int argc, char *argv[])
{
	int		i;
	int		size;
	char	*str;

	i = 1;
	size = argc;
	if (argc >= 1)
	{
		while (size > i)
		{
			str = argv[size - 1];
			while (*str)
			{
				write(1, str, 1);
				str++;
			}
			write(1, "\n", 1);
			size--;
		}
	}
	return (0);
}
