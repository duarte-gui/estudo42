void	ft_putchar(char block);

void	p_lines(char l_block, char m_block, char r_block, int x)
{
	ft_putchar(l_block);
	while (--x > 1)
	{
		ft_putchar(m_block);
	}
	if (x > 0)
		ft_putchar(r_block);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x && y > 0)
	{
		p_lines('A', 'B', 'A', x);
		while (--y > 1)
		{
			p_lines('A', ' ', 'B', x);
		}
		if (y > 0)
			p_lines('C', 'B', 'C', x);
	}
}
