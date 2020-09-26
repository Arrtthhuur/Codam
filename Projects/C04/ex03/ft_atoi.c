/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 14:14:58 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/24 20:11:15 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		compute_sign(char *str);

int		ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		sign = compute_sign(str);
		if (str[i] == ' ')
		{
		}
		else if (str[i] >= 48 && str[i] <= 57)
		{
			res = res * 10 + str[i] - '0';
			if (!(str[i + 1] >= 48 && str[i + 1] <= 57))
			{
				break ;
			}
		}
		i++;
	}
	return (sign * res);
}

int		compute_sign(char *str)
{
	int sign;
	int i;

	i = 0;
	sign = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '+')
		{
			sign *= 1;
		}
		else if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (sign);
}
