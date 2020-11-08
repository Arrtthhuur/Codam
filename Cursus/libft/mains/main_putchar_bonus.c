/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_putchar.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 12:27:36 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 12:27:56 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		ft_putchar(ch);
	}
	return (0);
}
