/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_atoi.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 10:51:04 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/02 11:34:28 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

void		ft_putstr(const char *str);

void		ft_putchar(const char c);

int			ft_atoi(const char *str);

int			main(int argc, const char *argv[])
{
	int		i;
	int		res;

	i = 1;
	if (argc == 1)
	{
		ft_putstr("No arg entered, here is program name: ");
		ft_putstr(argv[0]);
		ft_putstr("\n");
	}
	else
	{
		while (i < argc)
		{
			ft_putstr("Arguments are: ");
			ft_putstr(argv[i]);
			ft_putstr("\n");
			res = ft_atoi(argv[i]);
			printf("String value = %s, Int value = %d\n", argv[i], res);
			i++;
		}
	}
	return (0);
}
