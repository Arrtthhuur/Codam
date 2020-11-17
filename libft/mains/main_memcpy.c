/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memcpy.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 12:01:26 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/07 12:09:15 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		main(void)
{
	const char	src[42] = "Bonjour ca va bien";
	char		dest[42];

	strcpy(dest, "Goeiemorgen hoe gaat het");
	printf("Before ft_memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, strlen(src) + 1);
	printf("After ft_memcpy dest = %s\n", dest);
	return (0);
}
