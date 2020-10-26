/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_tolower.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 20:23:32 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 20:23:47 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

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
