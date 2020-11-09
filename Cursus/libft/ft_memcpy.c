/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:27:08 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/09 11:15:24 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (n == 0 || dst == src)
		return (dst);
	while (n > 0)
	{
		n--;
		((unsigned char*)dst)[n] = ((unsigned char*)src)[n];
	}
	return (dst);
}
