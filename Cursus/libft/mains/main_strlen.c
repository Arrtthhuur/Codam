/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strlen.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 09:00:21 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 09:06:03 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char a[42] = "Program";
	char b[42] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

	printf("Length of string a = %zu\n", ft_strlen(a));
	printf("Length of string b = %zu\n", ft_strlen(b));
	return (0);
}
