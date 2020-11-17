/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 17:16:10 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/16 18:34:08 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		compute_comb(int a, int b, int c, int d);

void		ft_putchar(char c);

void		write_comb_mid(int a, int b, int c, int d);

void		write_comb_end(int a, int b, int c, int d);

void		ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				d = 48;
				compute_comb(a, b, c, d);
				c++;
			}
			b++;
		}
		a++;
	}
}

void		compute_comb(int a, int b, int c, int d)
{
	int x;
	int y;

	while (d < 58)
	{
		x = a * 10 + b;
		y = c * 10 + d;
		if (a == 48 && b == 48 && c == 48 && d == 48)
		{
		}
		else if (a == 57 && b == 56 && c == 57 && d == 57)
		{
			write_comb_end(a, b, c, d);
		}
		else if (x < y)
		{
			write_comb_mid(a, b, c, d);
		}
		d++;
	}
}

void		write_comb_end(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void		write_comb_mid(int a, int b, int c, int d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	ft_putchar(',');
	ft_putchar(' ');
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
