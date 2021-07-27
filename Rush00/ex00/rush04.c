void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_ct;
	int	y_ct;

	y_ct = 0;
	while (y_ct < y && x_ct > 0 && y_ct > 0)
	{
		x_ct = 0;
		while (x_ct < x)
		{
			if ((y_ct == 0 && x_ct == 0) || (y_ct == y - 1 && x_ct == x - 1))
				ft_putchar('A');
			else if ((y_ct == 0 && x_ct == x - 1)
				|| (y_ct == y - 1 && x_ct == 0))
				ft_putchar('C');
			else if (y_ct == 0 || y_ct == y - 1 || x_ct == 0 || x_ct == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			++x_ct;
		}
		ft_putchar('\n');
		y_ct++;
	}
}
