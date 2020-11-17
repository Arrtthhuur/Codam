/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_putnbr_fd.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 12:16:56 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/01 12:21:53 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	int nb;
	int fd;

	nb = -2147483648;
	fd = 1;
	ft_putnbr_fd(nb, fd);
	return (0);
}
