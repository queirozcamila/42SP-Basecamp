#include <unistd.h>
int	main(int argc, char *argv[])
{
	char	*str;

	if (argc >= 1)
	{
		str = argv[0];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
