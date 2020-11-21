/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 20:24:59 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/24 11:13:02 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	if (size > 0)
	{
		while (*(src + i) != '\0')
		{
			if (i == size)
			{
				i--;
				break ;
			}
			*(dest + i) = *(src + i);
			i++;
		}
	}
	*(dest + i) = '\0';
	while (*(src + i) != '\0')
	{
		i++;
	}
	return (i);
}
