# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <marvin@codam.nl>                    +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/26 15:34:56 by abeznik       #+#    #+#                  #
#    Updated: 2020/10/30 22:10:33 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalnum.c ft_isprint.c ft_memcmp.c  \
			ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
			ft_memcpy.c ft_strchr.c  ft_strlcpy.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c  ft_isascii.c ft_memccpy.c \
			ft_memmove.c ft_strlen.c  ft_strrchr.c \
			ft_toupper.c  ft_isdigit.c ft_memchr.c  ft_memset.c \
			main_isalpha.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I.

NAME	=	libft.a

test: ft_isalpha.c ft_isalpha.o main_isalpha.c main_isalpha.o
	gcc -o test ft_isalpha.c main_isalpha.c -I.

test1: ft_isalpha.o main_isalpha.o
	$(CC) -o test ft_isalpha.o main_isalpha.o

all:		$(NAME)

$(NAME): 	$(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
