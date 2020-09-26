/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 16:55:50 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/24 20:29:11 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb);

int		main(void)
{
	int result;
	int nb;

	nb = 5;
	result = ft_recursive_factorial(nb);
	printf("%d! = %d", nb, result);
	return (0);
}
