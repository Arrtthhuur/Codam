/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_substr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 11:08:17 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/01 11:19:46 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(void)
{
	char	s[] = "substr function implement";
	int		start;
	int		len;

	start = 1;
	len = 5;
	char *sub = ft_substr(s, start, len);
	printf("%s\n", sub);
	return (0);
}
