/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_tolower.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 20:23:32 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/14 11:28:27 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(void)
{
	int		i;
	char	str[] = "Bonjour Les Gens";

	i = 0;
	while (str[i])
	{
		ft_putchar(ft_tolower(str[i]));
		i++;
	}
	return (0);
}
