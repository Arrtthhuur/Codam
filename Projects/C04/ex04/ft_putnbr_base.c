/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 16:12:11 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/25 19:35:29 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int nbr, char *base)
{
	int temp;
	int i;

	i = 0;
	while (nbr != 0)
	{
		temp = nbr % 16;
		if (temp < 10)
		{
			base[i] = temp + 48;
			i++;
		}
		else
		{
			base[i] = temp + 55;
			i++;
		}
		nbr = nbr / 16;
	}
}
