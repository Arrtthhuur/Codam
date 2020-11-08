/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 11:50:54 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 18:27:59 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	len;

	start = 0;
	len = ft_strlen(set);
	printf("len of set = %zu\n", len);
	i = 0;
	while (s1[start] != '\0' && len > 0)
	{
		printf("testing %c\n", s1[start]);
		if (ft_char_in_set(s1[start], set) != 0)
		{
			printf("found %c\n", set[i]);
			len--;
			i++;
		}
		else
		{
			printf("not found %c\n", set[i]);
		}
		start++;
	}
	printf("out of 1st while\n");
	end = ft_strlen(s1);
	i = 0;
	while (end > start)
	{
		printf("testing %c\n", s1[end - 1]);
		if (ft_char_in_set(s1[end - 1], set) != 0)
		{
			printf("found %c\n", set[i]);
			i++;
		}
		else
		{
			printf("not found %c\n", set[i]);
		}
		end--;
	}
	str = (char*)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
