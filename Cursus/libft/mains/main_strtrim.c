/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strtrim.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 11:50:22 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/01 12:01:32 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	s1[] = "bonjour ca va bien";
	char	set[] = "ca va";
	char	*res;

	res = ft_strtrim(s1, set);
	printf("%s", res);
	return (0);
}
