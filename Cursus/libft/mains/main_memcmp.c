/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memcmp.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 17:14:21 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/07 17:16:18 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char str1[15];
	char str2[15];
	int ret;

	ft_memcpy(str1, "abcdef", 6);
	ft_memcpy(str2, "ABCDEF", 6);
	ret = ft_memcmp(str1, str2, 5);
	if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return (0);
}
