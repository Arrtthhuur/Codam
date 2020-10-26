/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:20:05 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 14:53:37 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

int		main (void) 
{
	int i = 0;
	char c;
	char str[] = "Tutorials Point";

	while (str[i]) 
	{
		putchar (ft_tolower(str[i]));
		i++;
	}
	return (0);
}
