/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 19:01:52 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/22 19:36:40 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[]) 
{
	int a;
	int b;
	int i;
	char *temp;
	
	a = 1;
	b = a + 1;
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			if (argv[a] < argv[b])
			{
				temp = argv[b];
				argv[b] = argv[a];
				argv[a] = temp;
				a = 1;
				b = a + 1;
			}
			write(1, argv[i], 1); // change nbyte
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
