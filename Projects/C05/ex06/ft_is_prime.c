/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/28 15:27:07 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/28 15:58:20 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb);

int		ft_is_prime(int nb)
{
	int i;
	int sqrt;

	if (nb <= 1)
		return (0);
	else if (nb <= 3)
		return (1);
	else if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 2;
	sqrt = ft_sqrt(nb);
	while ((i <= sqrt) && (nb % i != 0))
		i++;
	return (i > sqrt);
}

int		ft_sqrt(int nb)
{
	unsigned int	i;
	unsigned int	sqrt;
	unsigned int	temp;

	temp = nb;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (nb);
	i = 0;
	while ((sqrt = i * i) <= temp)
		i++;
	i -= 1;
	if (i * i == temp)
		return (i);
	else
		return (0);
}
