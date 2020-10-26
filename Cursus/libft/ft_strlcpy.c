/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:26:07 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 15:26:08 by abeznik       ########   odam.nl         */
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
