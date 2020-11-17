/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 11:16:37 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/16 15:08:58 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define MAXCHAR 1000

int		main(void)
{
	static char		*next_line;
	int				fd;
	int				ret;
	char			*str;
	char			buff;
	char			*filename = "./test1.txt";

	fd = open(filename, O_RDONLY);
	str = (char *)malloc(100 * sizeof(char));
	if (fd < 0)
	{
		printf("Error while reading file\n");
		return (-1);
	}
	if (fd == 0)
	{
		printf("Reached EOF");
		return (0);
	}
	if ((ret = read(fd, str, 45)) != 0)
	{
		printf("called read(%d, c, 10)\n", fd);
		printf("returned that %d bytes were read\n", ret);
		str[ret] = '\0';
		printf("Bytes read: %s\n", str);
		tmp = ft_strjoin(str[ret], buff);
		next_line[fd] = tmp;
	}
	return (0);
}
