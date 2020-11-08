/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memccpy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 12:12:10 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/07 16:35:39 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char	buffer[42];
	char	msg[42] = "Copy this: not this";

	ft_memccpy(buffer, msg, ':', 80);
	printf("%s\n", buffer);
	return (0);
}
