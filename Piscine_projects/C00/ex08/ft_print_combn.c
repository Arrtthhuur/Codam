/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_combn.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/15 12:27:38 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/15 17:55:33 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_print_combn(int n)
{
	ft_putchar(n);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
