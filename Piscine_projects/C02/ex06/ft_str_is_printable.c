/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:38:58 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/23 17:42:49 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int		i;
	int		check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
		{
		}
		else
		{
			check = 0;
			break ;
		}
		i++;
	}
	return (check);
}
