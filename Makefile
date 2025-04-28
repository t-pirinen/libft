# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 17:32:33 by tpirinen          #+#    #+#              #
#    Updated: 2025/04/28 17:46:59 by tpirinen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
NAME = libft.a

COMPILER = cc

COMPILERFLAGS = -Wall -Wextra -Werror

SRCS =	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	\
		ft_isprint.c	ft_tolower.c	ft_toupper.c					\
																		\
		ft_bzero.c		ft_calloc.c		ft_memchr.c		ft_memcmp.c		\
		ft_memcpy.c		ft_memmove.c	ft_memset.c						\
																		\
		ft_atoi.c		ft_itoa.c		ft_split.c		ft_strchr.c		ft_strdup.c		\
		ft_strjoin.c	ft_strlcat.c	ft_strlcpy.c	ft_strlen.c		\
		ft_strncmp.c	ft_strnstr.c	ft_strrchr.c	ft_strtrim.c	\
		ft_substr.c

OBJS = $(SRCS:.c=.o)

.c.o:
	$(COMPILER) $(COMPILERFLAGS) -c $< -o $@

# rules
all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $^
		@echo "\nlib created"

tests: main.c $(NAME)
		cc $(COMPILERFLAGS) $^ -lbsd -o exec
		./exec

run: all tests fclean

clean:
		@rm -f *.o

fclean: clean
		@rm -f $(NAME) exec

re: fclean all

.PHONY: all clean fclean re test