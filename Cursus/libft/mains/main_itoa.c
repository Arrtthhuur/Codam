/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_itoa.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:48:25 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 19:33:03 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int		i;
	char	*ret;

	i = 5;
	ret = ft_itoa(i);
	printf("\nTest 1\n");
	printf("Before itoa, n = %d\nAfter itoa, n = %s\n", i, ret);
	i = -5;
	ret = ft_itoa(i);
	printf("\nTest 2\n");
	printf("Before itoa, n = %d\nAfter itoa, n = %s\n", i, ret);
	printf("\nTest 3\n");
	i = -2147483648LL;
	ret = ft_itoa(i);
	printf("Before itoa, n = %d\nAfter itoa, n = %s\n", i, ret);
	printf("\nTest 4\n");
	i = 2147483647;
	ret = ft_itoa(i);
	printf("Before itoa, n = %d\nAfter itoa, n = %s\n", i, ret);
}
