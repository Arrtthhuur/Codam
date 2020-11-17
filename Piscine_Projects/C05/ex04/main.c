/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 20:37:35 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/24 20:48:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonnaci(int index);

int		main(void)
{
	int index;
	int c;
	int i;

	index = 5;
	i = 0;
	for (c = 1 ; c <= index ; c++)
	{
		printf("%d\n", ft_fibonnaci(i));
		i++;
	}
	return (0);
}
