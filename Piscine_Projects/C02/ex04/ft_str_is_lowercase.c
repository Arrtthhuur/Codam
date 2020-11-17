/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:38:58 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/23 16:55:27 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;
	int check;

	i = 0;
	check = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 120)
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
