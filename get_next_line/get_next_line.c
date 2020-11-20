/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/16 09:47:36 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/20 17:13:21 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int			ft_new_line(char **stack, char **line, int i, int ret_read)
{
	int				len;
	char			*tmp_stack;

	len = 0;
	while (stack[i][len] != '\n' && stack[i][len] != '\0')
		len++;
	if (stack[i][len] == '\n')
	{
		*line = ft_substr(stack[i], 0, len);
		tmp_stack = ft_strdup(stack[i] + len + 1);
		free(stack[i]);
		stack[i] = tmp_stack;
		if (stack[i][0] == '\0')
			ft_strdel(&stack[i]);
	}
	else if (stack[i][len] == '\0')
	{
		if (ret_read == BUFFER_SIZE)
			return (get_next_line(i, line));
		*line = ft_strdup(stack[i]);
		ft_strdel(&stack[i]);
	}
	return (1);
}

int			get_next_line(int fd, char **line)
{
	static char		*stack[255];
	char			heap[BUFFER_SIZE + 1];
	char			*tmp_stack;
	int				ret_read;
	int				i;

	if (fd < 0 || line == NULL)
	{
		printf("[Error (-1)] Error occured\n");
		return (-1);
	}
	i = 0;
	while ((ret_read = read(fd, heap, BUFFER_SIZE)) > 0)
	{
		heap[ret_read] = '\0';
		if (stack[i] == NULL)
			stack[i] = ft_strnew(1);
		tmp_stack = ft_strjoin(stack[i], heap);
		free(stack[i]);
		stack[i] = tmp_stack;
		if (ft_strchr(heap, '\n'))
			break ;
	}
	if (ret_read < 0)
	{
		printf("[Error (-1)] Error occured\n");
		return (-1);
	}
	else if (ret_read == 0 && (stack[i] == NULL || stack[i][0] == '\0'))
	{
		printf("[Error (0)] EOF reached\n");
		return (0);
	}
	return (ft_new_line(stack, line, i, ret_read));
}
