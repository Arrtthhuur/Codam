/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_substr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 11:08:17 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 16:57:41 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	s[42] = "Bonjour ca va bien";
	char	*sub;
	int		start;
	size_t	len;

	start = 3;
	len = 7;
	sub = ft_substr(s, start, len);
	printf("%s\n", sub);
	return (0);
}
