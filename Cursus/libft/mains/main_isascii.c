/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_isascii.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 11:42:46 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 11:45:50 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

int		main(void)
{
	int var1 = 'd';
	int var2 = '2';
	int var3 = '\t';
	int var4 = ' ';

	if (ft_isascii(var1))
	{
		printf("var1 = |%c| is ascii\n", var1);
	}
	else
	{
		printf("var1 = |%c| is not ascii\n", var1);
	}
	if (ft_isascii(var2))
	{
		printf("var2 = |%c| is ascii\n", var2);
	}
	else
	{
		printf("var2 = |%c| is not ascii\n", var2);
	}
	if (ft_isascii(var3))
	{
		printf("var3 = |%c| is ascii\n", var3);
	}
	else
	{
		printf("var3 = |%c| is not ascii\n", var3);
	}
	if (ft_isascii(var4))
	{
		printf("var4 = |%c| is ascii\n", var4);
	}
	else
	{
		printf("var4 = |%c| is not ascii\n", var4);
	}
	return (0);
}
