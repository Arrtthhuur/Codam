/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 18:33:18 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/22 18:41:56 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[]) 
{
	int i;
	
	i = 0;
	while (i < argc)
	{
		write(1, argv[i], 7);
		i++;
	}
	return (0);
}
