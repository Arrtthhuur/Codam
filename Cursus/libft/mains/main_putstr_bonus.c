/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_putstr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 12:27:03 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 12:27:19 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char str1[] = "bonjour ";
	char str2[] = "ca va?\n";

	ft_putstr(str1);
	ft_putstr(str2);
	return (0);
}
