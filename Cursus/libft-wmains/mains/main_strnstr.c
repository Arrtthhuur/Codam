/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strnstr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:14:51 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 10:30:24 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	const char	haystack[20] = "Bonjour ca va bien";
	// const char	needle[10] = "ca";
	// const char	needle[10] = "\0";
	const char	needle[10] = "null";
	char		*ret;

	ret = ft_strnstr(haystack, needle, 20);
	printf("The substring is: %s\n", ret);
	return (0);
}
