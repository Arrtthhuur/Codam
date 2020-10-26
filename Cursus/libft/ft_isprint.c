/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isprint.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:15:10 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 15:25:00 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 127);
}

int		main(void)
{
	int var1 = 'k';
	int var2 = '8';
	int var3 = '\t';
	int var4 = ' ';

	if (ft_isprint(var1))
	{
		printf("var1 = |%c| can be printed\n", var1);
	}
	else
	{
		printf("var1 = |%c| can't be printed\n", var1);
	}
	if (ft_isprint(var2))
	{
		printf("var2 = |%c| can be printed\n", var2);
	}
	else
	{
		printf("var2 = |%c| can't be printed\n", var2);
	}
	if (ft_isprint(var3))
	{
		printf("var3 = |%c| can be printed\n", var3);
	}
	else
	{
		printf("var3 = |%c| can't be printed\n", var3);
	}
	if (ft_isprint(var4))
	{
		printf("var4 = |%c| can be printed\n", var4);
	}
	else
	{
		printf("var4 = |%c| can't be printed\n", var4);
	}
	return (0);
}
