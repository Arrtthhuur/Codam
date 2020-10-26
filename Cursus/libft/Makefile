# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <marvin@codam.nl>                    +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/26 15:34:56 by abeznik       #+#    #+#                  #
#    Updated: 2020/10/26 16:17:33 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS = *.c \
ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_isprint.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	   ft_strncmp.c ft_strnstr.c ft_tolower.c ft_toupper.c
OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.

NAME = libft.a

all: $(NAME)

$(NAME) $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
