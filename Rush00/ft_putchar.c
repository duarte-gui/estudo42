#include <unistd.h>

void	ft_putchar(char block)
{
	write(1, &block, 1);
}
