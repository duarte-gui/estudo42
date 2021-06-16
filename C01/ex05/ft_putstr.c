#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	e_plate;

	e_plate = 0;
	while (str[e_plate] != '\0')
	{
		ft_putchar(str[e_plate]);
		e_plate++;
	}	
}
