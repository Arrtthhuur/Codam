/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 17:16:10 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/15 17:47:11 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		compute_comb(int a, int b, int c);

void		ft_putchar(char c);

void		ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 48;
	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			c = b + 1;
			while (c < 58)
			{
				compute_comb(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void		compute_comb(int a, int b, int c)
{
	if (a != 55)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		ft_putchar(',');
		ft_putchar(' ');
	}
	else
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
	}
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
