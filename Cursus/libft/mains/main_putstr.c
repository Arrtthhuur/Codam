/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_putstr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 17:29:55 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/01 10:33:58 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int main (void) 
{
	char str1[] = "bonjour ";
	char str2[] = "ca va?\n";

	ft_putstr(str1);
	ft_putstr(str2);
	return (0);
}
