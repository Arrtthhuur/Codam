/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: abeznik <abeznik@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 14:06:03 by abeznik       #+#    #+#                 */
/*   Updated: 2020/11/20 17:05:44 by abeznik       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stddef.h>

int		get_next_line(int fd, char **line);

void	ft_strdel(char **as);

char	*ft_strdup(const char *s1);

char	*ft_strchr(const char *s, int c);

char	*ft_strnew(size_t size);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif