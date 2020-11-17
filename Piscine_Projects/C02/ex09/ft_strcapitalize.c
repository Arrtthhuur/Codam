/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcapitalize.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 16:38:58 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/23 20:16:04 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

void	moulinette_function(char *str, int i);

char	*ft_strcapitalize(char *str)
{
	int i;
	int temp;

	i = 0;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			temp = str[i];
			str[i] = temp - 32;
			while (str[i] != '\0')
			{
				if (str[i] == ' ' || str[i] == '-' || str[i] == '+')
				{
					moulinette_function(str, i);
				}
				i++;
			}
		}
		i++;
	}
	return (str);
}

char	*ft_strlowcase(char *str)
{
	int		i;
	int		temp;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			temp = str[i];
			str[i] = temp + 32;
		}
		i++;
	}
	return (str);
}

void	moulinette_function(char *str, int i)
{
	int temp;

	if (str[i + 1] >= 97 && str[i + 1] <= 122)
	{
		temp = str[i + 1];
		str[i + 1] = temp - 32;
	}
}
