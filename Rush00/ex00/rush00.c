void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	x_ct;
	int	y_ct;

	y_ct = 0;
	while (y_ct < y && y_ct > 0 && x_ct > 0)
	{
		x_ct = 0;
		while (x_ct < x)
		{
			if ((y_ct == 0 || y_ct == y - 1) && (x_ct == 0 || x_ct == x - 1))
				ft_putchar('o');
			else if (y_ct == 0 || y_ct == y - 1)
				ft_putchar('-');
			else if (x_ct == 0 || x_ct == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			++x_ct;
		}
		ft_putchar('\n');
		y_ct++;
	}
}
