void	ft_putchar(char c);

void	ft_printer(int x, char startchar, char midchar, char endchar)
{
	ft_putchar(startchar); // 3 2 1 -- A B C X=2 
	while ((x - 1) > 1)
	{
		ft_putchar(midchar);
		x--;
	}
	if (x > 1)
		ft_putchar(endchar);
	ft_putchar('\n');
}

void	rush(int x, int y) //X=COLUNA Y=LINHA
{
	if (x > 0 && y > 0)
	{
		ft_printer(x, 'A', 'B', 'C');
		y--;                              //3-->2
		while (y > 1)
		{
			ft_printer(x, 'B', ' ', 'B');   //SAI COM Y =1
			y--;
		}
		if (y > 0) // y(linha)=1
			ft_printer(x, 'A', 'B', 'C');
	}
}
