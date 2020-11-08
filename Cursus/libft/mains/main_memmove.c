/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memmove.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:37:48 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/07 16:57:35 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char src[21] = "Bonjour";
	char dst[42] = "Ca va";

	printf("before ft_mmemmove dst is: %s\n", dst);
	ft_memmove(dst, src, sizeof(src));
	printf("after ft_mmemmove dst is: %s\n", dst);
	return (0);
}
