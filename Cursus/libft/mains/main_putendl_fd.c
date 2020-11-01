/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_putendl_fd.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 12:28:37 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/01 12:30:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	s[] = "bonjour ca va";
	int		fd;

	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}
