# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: abeznik <abeznik@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/10/26 15:34:56 by abeznik       #+#    #+#                  #
#    Updated: 2020/11/02 12:17:15 by abeznik       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_substr.c  ft_strjoin.c \
			ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_strtrim.c \
			ft_memcpy.c ft_strchr.c  ft_strlcpy.c ft_calloc.c ft_putnbr_fd.c \
			ft_strnstr.c ft_tolower.c ft_bzero.c  ft_isascii.c ft_memccpy.c \
			ft_memmove.c ft_strlen.c  ft_strrchr.c ft_strdup.c ft_putendl_fd.c \
			ft_toupper.c  ft_isdigit.c ft_memchr.c  ft_memset.c \
			ft_putchar.c ft_putstr.c ft_putchar_fd.c ft_putstr_fd.c

MAINS	=	mains/main_isalpha.c mains/main_isalnum.c mains/main_isdigit.c \
			mains/main_isprint.c mains/main_putstr.c mains/main_substr.c \
			mains/main_tolower.c mains/main_toupper.c mains/main_strjoin.c \
			mains/main_strtrim.c mains/main_putnbr_fd.c mains/main_atoi.c \
			mains/main_putendl_fd.c mains/main_calloc.c

OBJS	=	$(SRCS:.c=.o)

MAIN	=	$(MAINS:.c=.o)

CC		=	gcc
RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I.

NAME	=	libft.a

alpha:		ft_isalpha.o mains/main_isalpha.o
	$(CC) -o alpha ft_isalpha.o mains/main_isalpha.o

putstr:		ft_putstr.o ft_putchar.o mains/main_putstr.o
	$(CC) -o putstr ft_putstr.o ft_putchar.o mains/main_putstr.o

sub:		ft_substr.o mains/main_substr.o
	$(CC) -o sub.out ft_substr.o mains/main_substr.o

join:		ft_strjoin.o mains/main_strjoin.o ft_strlen.o
	$(CC) -o join.out ft_strjoin.o mains/main_strjoin.o ft_strlen.o

trim:		ft_strtrim.o mains/main_strtrim.o ft_strlen.o
	$(CC) -o trim.out ft_strtrim.o mains/main_strtrim.o ft_strlen.o

putnbr:		ft_putnbr_fd.o mains/main_putnbr_fd.o ft_putchar_fd.o
	$(CC) -o putnbr.out ft_putnbr_fd.o mains/main_putnbr_fd.o ft_putchar_fd.o

putendl:	ft_putendl_fd.o mains/main_putendl_fd.o ft_strlen.o
	$(CC) -o putendl.out ft_putendl_fd.o mains/main_putendl_fd.o ft_strlen.o

calloc:		ft_calloc.o mains/main_calloc.o bzero.o
	$(CC) -o calloc.out ft_calloc.o mains/main_calloc.o bzero.o

atoi:		ft_atoi.o mains/main_atoi.o
	$(CC) -o atoi.out ft_atoi.o mains/main_atoi.o
	
itoa:		ft_itoa.o mains/main_itoa.o
	$(CC) -o itoa.out ft_itoa.o mains/main_itoa.o
all:		$(NAME)

$(NAME): 	$(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

mclean:		clean
	$(RM) $(MAIN)

re:			fclean $(NAME)

.PHONY:		all clean fclean mclean re
