/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strrchr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 10:04:07 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 10:16:43 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	const char	s[42] = "Bonjour ca va bien";
	// const char	c = 'a';
	// const char	c = 'z';
	const char	c = '\0';
	char		*ret;

	ret = ft_strrchr(s, c);
	printf("String after |%c| is - |%s|\n", c, ret);
	return (0);
}
