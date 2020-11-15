/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_split.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 17:44:02 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/15 11:59:45 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        main(void)
{
	char	str[] = "salut les gens";
	char	**ret;
	size_t	x;
	char	c;

	c = ' ';
	ret = ft_split(str, c);
	x = 0;
	while (ret[x])
	{
		printf("[%zu] = %s\n", x, ret[x]);
		x++;
	}
	return (0);
}
