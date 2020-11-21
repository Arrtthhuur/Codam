/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/10 16:48:23 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/13 16:48:43 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_is_negative(int n)
{
	int a;

	if (n < 0)
	{
		a = 78;
		write(1, &a, 1);
	}
	else if (n == 0)
	{
		a = 80;
		write(1, &a, 1);
	}
	else
	{
		a = 80;
		write(1, &a, 1);
	}
}
