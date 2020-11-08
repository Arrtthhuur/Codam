/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_bzero.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 10:36:25 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/07 11:57:51 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int		main(void)
{
	char	str1[42] = "Bonjour ca va bien et vous";
	char	str2[42] = "Bonjour ca va bien et vous";
	int		n;

	n = 21;
	ft_bzero(str1, n);
	bzero(str2, n);
	write(1, str1, 42);
	write(1, "\n", 1);
	write(1, str2, 42);
	write(1, "\n", 1);
	return (0);
}
