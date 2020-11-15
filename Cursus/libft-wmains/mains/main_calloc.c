/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_calloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 10:18:57 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/09 16:33:12 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*ft_ret;
	char	*off_ret;

	ft_ret = ft_calloc(0, 0);
	printf("ft result = %s\n", ft_ret);
	off_ret = calloc(0, 0);
	printf("off result = %s\n", off_ret);
	return (0);
}
