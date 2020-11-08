/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strchr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 09:47:50 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 10:06:23 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	const char	s[42] = "Bonjour ca va bien";
	const char	c = 'a';
	// const char	c = 'z';
	char		*ret;

	ret = ft_strchr(s, c);
	printf("String after |%c| is - |%s|\n", c, ret);
	return (0);
}
