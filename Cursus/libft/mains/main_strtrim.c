/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strtrim.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 11:50:22 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 17:50:16 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	s1[] = "bonjour ca va bien";
	char	set[] = "on";
	char	*res;

	res = ft_strtrim(s1, set);
	printf("%s\n", res);
	return (0);
}
