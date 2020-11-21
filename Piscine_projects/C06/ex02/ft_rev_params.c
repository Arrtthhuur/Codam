/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 19:00:41 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/22 19:00:53 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[]) 
{
	int i;
	
	i = argc;
	if (argc > 1)
	{
		while (i > 1)
		{
			write(1, argv[i - 1], 6); // change nbyte
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
