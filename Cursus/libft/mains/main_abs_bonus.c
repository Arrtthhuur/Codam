/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_abs_bonus.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/08 12:31:51 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/08 12:45:47 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	int a;
	int	b;
	int rawa;
	int rawb;

	rawa = 5;
	rawb = -10;
	a = ft_abs(rawa);
	printf("abs value of %d = %d\n", rawa, a);
	b = ft_abs(rawb);
	printf("abs value of %d = %d\n", rawb, b);
	return (0);
}
