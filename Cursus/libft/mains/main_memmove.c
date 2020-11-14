/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memmove.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:37:48 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/14 16:46:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char src[] = "Bonjour";
	char *dst;

	dst = src + 1;
	printf("before ft_mmemmove dst is: %s\n", dst);
	ft_memmove(dst, src, 0);
	printf("after ft_mmemmove dst is: %s\n", dst);
	return (0);
}
