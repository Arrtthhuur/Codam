/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 17:12:37 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/24 20:27:17 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int		main(void)
{
	int result;
	int nb;
	int power;

	nb = 5;
	power = 3;
	result = ft_iterative_power(nb, power);
	printf("%d^%d = %d", nb, power, result);
	return (0);
}
