/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:48:57 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/05 16:39:08 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digit(long n)
{
	size_t i;

	i = 1;
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		neg;
	size_t	len;

	neg = 0;
	if (n < 0)
		neg = 1;
	len = ft_count_digit(n);
	printf("len = %ld\n", len);
	str = ft_calloc(11 + neg, len);
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (neg == 1)
	{
		n = -n;
		str[0] = '-';
	}
	while (len > 0)
	{
		str[len + neg - 1] = ft_abs(n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}
