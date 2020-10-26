/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 15:27:06 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 16:19:38 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 1;
	while (i <= n && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
	}
	if (n == 0)
		return (0);
	else
		return (*s1 - *s2);
}
