/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 13:32:16 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/25 18:59:53 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int s_len;
	unsigned int d_len;
	unsigned int i;

	i = 0;
	s_len = 0;
	d_len = 0;
	if (size == 0)
	{
		return (s_len);
	}
	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (size && (size - 1 - d_len) && src[i])
	{
		dest[d_len + i] = src[i];
		i++;
		size--;
	}
	dest[d_len + i] = '\0';
	return (s_len + d_len);
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
