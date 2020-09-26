/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 17:12:50 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/22 17:25:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	while (power != 0)
	{
		res *= nb; 
		power--;
	}
	return (res);
}