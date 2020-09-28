/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 17:12:50 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/28 16:15:59 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = 1;
	if ((nb == 0 && power == 0) || power == 0)
	{
		return (1);
	}
	else if (power < 0)
	{
		return (0);
	}
	while (power != 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
