/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:17:03 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 14:53:23 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
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
		putchar (ft_toupper(str[i]));
		i++;
	}
	return (0);
}
