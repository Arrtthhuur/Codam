/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:12:16 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/25 19:09:13 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char ptr);

void		recursive(int nb);

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		recursive(147483648);
	}
	else
	{
		recursive(nb);
	}
}

void		recursive(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		recursive(nb * -1);
	}
	else if (nb < 10)
	{
		nb += '0';
		ft_putchar(nb);
	}
	else
	{
		recursive(nb / 10);
		nb = nb % 10 + '0';
		ft_putchar(nb);
	}
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
