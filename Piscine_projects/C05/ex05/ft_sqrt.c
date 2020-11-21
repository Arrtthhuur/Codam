/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 20:48:42 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/28 15:55:34 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
