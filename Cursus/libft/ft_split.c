/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/14 14:59:40 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/14 18:09:26 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t		ft_countwords(char *str, char c)
{
	size_t	i;
	size_t	nb;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] == c && str[i])
		i++;
	if (i == len)
		return (0);
	nb = 0;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && i != len - 1)
			nb++;
		i++;
	}
	return (nb + 1);
}

static size_t		ft_wordlen(char const *s, char c)
{
	size_t		len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char				**ft_split(char const *s, char c)
{
	char		**ret;
	char		*ptr;
	size_t		nbw;
	size_t		i;

	ptr = (char *)s;
	if (!ptr)
		return (NULL);
	nbw = ft_countwords(ptr, c);
	ret = (char **)malloc((nbw + 1) * sizeof(char *));
	if (!ret)
		return (NULL);
	i = 0;
	while (nbw > i)
	{
		while (*ptr == c && *ptr)
			ptr++;
		ret[i] = ft_substr(s, 0, ft_wordlen(s, c));
		if (!ret[i])
			return (NULL);
		s = s + ft_wordlen(s, c);
		i++;
	}
	ret[i] = NULL;
	return (ret);
}
