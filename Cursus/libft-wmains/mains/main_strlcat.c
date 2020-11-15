/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strlcat.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 09:28:49 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 09:41:10 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char	dst[42] = "Bonjour ca va";
	char	src[42] = " bien";
	size_t	size;

	size = 20;
	printf("Before ft_strlcat, dst = %s\n", dst);
	ft_strlcat(dst, src, size);
	printf("After ft_strlcat, dst = %s\n", dst);
	return (0);
}
