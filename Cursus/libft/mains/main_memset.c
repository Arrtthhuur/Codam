/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memset.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 10:49:05 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/07 11:20:56 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char str[21] = "Bonjour ca va";

	printf("Before ft_memset(): %s\n", str);
	ft_memset(str, '?', 4 * sizeof(char));
	printf("After ft_memset(): %s", str);
	return (0);
}
