/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalnum.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:07:21 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 15:23:05 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int		main(void)
{
	int var1 = 'd';
	int var2 = '2';
	int var3 = '\t';
	int var4 = ' ';

	if (ft_isalnum(var1))
	{
		printf("var1 = |%c| is alphanumeric\n", var1);
	}
	else
	{
		printf("var1 = |%c| is not alphanumeric\n", var1);
	}
	if (ft_isalnum(var2))
	{
		printf("var2 = |%c| is alphanumeric\n", var2);
	}
	else
	{
		printf("var2 = |%c| is not alphanumeric\n", var2);
	}
	if (ft_isalnum(var3))
	{
		printf("var3 = |%c| is alphanumeric\n", var3);
	}
	else
	{
		printf("var3 = |%c| is not alphanumeric\n", var3);
	}
	if (ft_isalnum(var4))
	{
		printf("var4 = |%c| is alphanumeric\n", var4);
	}
	else
	{
		printf("var4 = |%c| is not alphanumeric\n", var4);
	}
	return (0);
}
