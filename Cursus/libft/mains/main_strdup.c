/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strdup.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 12:13:15 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/14 11:45:42 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		main(void)
{
	char	src[42] = "Bonjour ca va bien";
	char	*target = ft_strdup(src);

	printf("Src: %s, target = %s", src, target);
	return (0);
}
