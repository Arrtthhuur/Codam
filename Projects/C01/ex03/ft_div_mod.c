/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 16:09:26 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/17 16:18:03 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int result;
	int remainder;

	result = a / b;
	remainder = a % b;
	*div = result;
	*mod = remainder;
}
