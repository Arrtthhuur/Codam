/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 19:19:51 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/17 20:26:20 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int rev_index;
	int tab_index;

	rev_index = 0;
	tab_index = size - 1;
	while (rev_index < tab_index)
	{
		temp = tab[rev_index];
		tab[rev_index] = tab[tab_index];
		tab[tab_index] = temp;
		rev_index++;
		tab_index--;
	}
}
