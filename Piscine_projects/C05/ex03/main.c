/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 17:12:37 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/24 20:25:53 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int		main(void)
{
	int result;
	int nb;
	int power;

	nb = 5;
	power = 3;
	result = ft_recursive_power(nb, power);
	printf("%d^%d = %d", nb, power, result);
	return (0);
}
