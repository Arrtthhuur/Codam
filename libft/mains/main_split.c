/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_split.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 17:44:02 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/14 18:11:56 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	str[] = "bababababa";
	char	**ret;
	int		i;

	i = ft_strlen(str);
	ret = ft_split(str, 'a');
	while (i > 0)
	{
		printf("%s\n", ret[i]);
		i--;
	}
	return (0);
}
