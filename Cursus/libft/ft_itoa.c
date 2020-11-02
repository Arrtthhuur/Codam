/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:48:57 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/02 12:30:22 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size);

static int	ft_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	size_t	len;

	is_neg = (n < 0);
	if (!(str = ft_calloc(11 + is_neg, sizeof(*str))))
		return (NULL);
	if (n == 0)
		str[0] = '0';
	len = 0;
	while (n != 0)
	{
		str[len] = '0' + ft_abs(n % 10);
		n = n / 10;
		len++;
	}
	if (is_neg)
		str[len] = '-';
	return (str);
}
