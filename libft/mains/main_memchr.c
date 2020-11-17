/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memchr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 17:00:54 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/07 17:09:24 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	const char	str[] = "Bonjour ca va bien";
	const char	c = 'a';
	char		*ret;

	ret = ft_memchr(str, c, strlen(str));
	printf("String after |%c| is - |%s|\n", c, ret);
	return (0);
}
