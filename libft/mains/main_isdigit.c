/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_isdigit.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 19:56:22 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/05 14:12:31 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int		main(void)
{
	char c;

	c = '5';
	printf("Result when numeric character is passed: %d\n", ft_isdigit(c));
	c = 'a';
	printf("Result when non-numeric character is passed: %d\n", ft_isdigit(c));
	return (0);
}
