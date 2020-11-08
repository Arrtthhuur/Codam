/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strlcpy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 09:13:22 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 09:25:27 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char	src[42] = "Bonjour ca va bien";
	char	dst[42];
	size_t	size;
	size_t	len;

	size = 10;
	len = ft_strlcpy(dst, src, size);
	printf("dst = %s\ntotal length created = %zu", dst, len);
	return (0);
}
