/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strncmp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 10:32:42 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 10:40:53 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	ft_strlcpy(str1, "abcdef", 8);
	ft_strlcpy(str2, "ABCDEF", 8);
	ret = ft_strncmp(str1, str2, 4);
	if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return (0);
}
