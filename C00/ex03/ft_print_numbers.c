/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gutavare <gutavare@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 01:38:45 by gutavare          #+#    #+#             */
/*   Updated: 2021/06/09 03:22:02 by gutavare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_print_numbers(void)
{
	char	c;

	c = '1';
	while (c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}
