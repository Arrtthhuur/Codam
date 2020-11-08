/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_putstr_fd.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 17:29:55 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 12:26:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char str1[] = "bonjour ";
	char str2[] = "ca va?\n";

	ft_putstr_fd(str1, 1);
	ft_putstr_fd(str2, 1);
	return (0);
}
