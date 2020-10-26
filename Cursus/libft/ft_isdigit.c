/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:20:59 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 14:59:37 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int		main(void)
{
	char c;

	c = '5';
	printf("Result when numeric character is passed: %d", ft_isdigit(c));
	c = 'a';
	printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));
	return (0);
}
