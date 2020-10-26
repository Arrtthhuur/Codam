/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isalpha.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:14:00 by abeznik       #+#    #+#                 */
/*   Updated: 2020/10/26 14:48:35 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int		main(void) 
{
	char str[] = "12abc12";

	int alphabet = 0;
	int number = 0; 
	int i;
	for (i=0; str[i]!= '\0'; i++)
	{
		// check for alphabets
		if (ft_isalpha(str[i]) != 0)
			alphabet++;
	}
	printf("Alphabetic_letters = %d, "
				"Decimal_digits = %d\n", alphabet, number);
	return (0);
}
