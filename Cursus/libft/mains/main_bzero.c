/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_bzero.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 10:36:25 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/02 10:48:57 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ibft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(int argc, const char *argv[])
{
	void	*mem;

	alarm(5);
	if (argc == 1 || !(mem = malloc(sizeof(*mem) * 5)))
		return (0);
	if (atoi(argv[1]) == 1)
	{
		memset(mem, 'e', 5);
		ft_bzero(mem, 5);
		write(1, mem, 5);
	}
	else if (atoi(argv[1]) == 2)
	{
		memset(mem, 'e', 5);
		ft_bzero(mem, 0);
		write(1, mem, 5);
	}
	return (0);
}
