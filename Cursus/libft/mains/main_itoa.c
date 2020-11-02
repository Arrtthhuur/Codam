/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_itoa.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:48:25 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/02 12:22:09 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_itoa(int n);

int		ft_atoi(const char *str);

int		main(int argc, char *argv[])
{
	char	*res;
	int		i;
	int		arg;

	i = 0;
	if (argc == 1)
	{
		printf("No arg entered");
	}
	else
	{
		while (i < argc)
		{
			arg = ft_atoi(argv[i]);
			res = ft_itoa(arg);
			printf("Result = %s\n", res);
			i++;
		}
	}
	return (0);
}
