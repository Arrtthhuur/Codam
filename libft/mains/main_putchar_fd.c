/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_putchar.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 12:17:41 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 12:20:06 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		ft_putchar_fd(ch, 1);
	}
	return (0);
}
