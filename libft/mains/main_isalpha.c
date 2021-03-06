/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_isalpha.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 19:55:52 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/14 11:20:03 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	str[] = "12abc12";
	int		alpha;
	int		nb;
	int		i;

	alpha = 0;
	nb = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]) != 0)
			alpha++;
		i++;
	}
	printf("String is: %s, Alpha elements = %d\n", str, alpha);
	return (0);
}
