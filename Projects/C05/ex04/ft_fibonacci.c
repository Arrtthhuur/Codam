/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fibonacci.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/24 20:33:29 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/24 20:47:14 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonnaci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		return (ft_fibonnaci(index - 1) + ft_fibonnaci(index - 2));
	}
}
