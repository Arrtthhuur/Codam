/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 11:44:01 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/02 11:44:02 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		compute_sign(const char *str)
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

int		ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	if (!str)
		return (0);
	sign = compute_sign(str);
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
