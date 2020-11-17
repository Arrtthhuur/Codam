/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strjoin.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 11:30:50 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 17:02:44 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*res;
	char	str[] = "bonjour";
	char	dest[] = "salut, ";

	res = ft_strjoin(dest, str);
	printf("%s", res);
	return (0);
}
