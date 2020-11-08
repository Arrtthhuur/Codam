/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 17:12:35 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/02 11:19:13 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

void		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
