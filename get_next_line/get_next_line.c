/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 09:47:36 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/16 13:59:25 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

int				get_next_line(int fd, char **line)
{
	static char	*next_line[FD_SIZE];
	char		buff[BUFFER_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((ret = read(fd, buff, BUFFER_SIZE)) > 0)
	{
		if (ret < 0)
			return (-1);
		if (ret == 0)
			return (0);
		tmp = ft_strjoin(next_line[fd], buff);
		next_line[fd] = tmp;
	}
	return (ret);
}
