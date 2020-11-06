/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_itoa.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:48:25 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/05 16:36:53 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char *argv[])
{
	char	*res;
	int		i;
	int		arg;

	i = 1;
	if (argc == 1)
	{
		printf("No arg entered\n");
	}
	else
	{
		while (i < argc)
		{
			arg = ft_atoi(argv[i]);
			printf("Input = %s\n", argv[i]);
			res = ft_itoa(arg);
			printf("Result = %s\n", res);
			i++;
		}
	}
	return (0);
}
