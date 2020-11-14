/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_toupper.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 20:23:02 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/14 11:32:31 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(void)
{
	int		i;
	char	str[] = "Bonjour Les Gens";

	i = 0;
	while (str[i])
	{
		ft_putchar(ft_toupper(str[i]));
		i++;
	}
	return (0);
}
