/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_calloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/02 10:18:57 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/02 11:18:52 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// int		main(void)
// {
// 	int i;
// 	int n;
// 	int *a;

// 	printf("Number of elements to be entered:");
// 	scanf("%d", &n);
// 	a = (int*)calloc(n, sizeof(int));
// 	printf("Enter %d numbers:\n", n);
// 	for(i = 0; i < n; i++)
// 	{
// 		scanf("%d", &a[i]);
// 	}
// 	printf("The numbers entered are: ");
// 	for(i = 0; i < n; i++)
// 	{
// 		printf("%d ", a[i]);
// 	}
// 	free(a);
// 	return (0);
// }

int		main(int argc, const char *argv[])
{
	char	*str;

	alarm(5);
	if (argc == 1)
		return (0);
	else if (atoi(argv[1]) == 1)
	{
		str = (char *)ft_calloc(30, 1);
		if (!str)
			write(1, "NULL", 4);
		else
			write(1, str, 30);
	}
	return (0);
}
