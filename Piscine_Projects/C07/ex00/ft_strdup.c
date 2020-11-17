/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 19:40:05 by abeznik       #+#    #+#                 */
/*   Updated: 2020/09/22 20:00:38 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

/* The function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.  
   The pointer may subsequently be used as an argument to the function free(3).
   If insufficient memory is available, NULL is returned and errno is set to ENOMEM. 
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src) 
{
	char *str;
	char *p;
	int len;
	int i;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	str = malloc(len + 1);
	p = str;
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[len + 1] = '\0';
	return (str);
}

int		main(void)
{
	char src[42] = "bonjour ca va";
	char *c;

	c = ft_strdup(src);
	printf("c = %s", c);
	return (0);
}
