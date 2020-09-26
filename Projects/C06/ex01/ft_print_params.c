/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 18:43:00 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/22 19:00:21 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[]) 
{
	int i;
	
	i = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			write(1, argv[i], 6); // change nbyte
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
