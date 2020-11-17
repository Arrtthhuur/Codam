/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_in_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/17 20:27:09 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/21 14:07:20 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int b;
	int temp;

	a = 0;
	b = a + 1;
	while (b < size)
	{
		if (tab[a] > tab[b])
		{
			temp = tab[b];
			tab[b] = tab[a];
			tab[a] = temp;
			a = 0;
			b = a + 1;
		}
		else
		{
			a++;
			b++;
		}
	}
}
