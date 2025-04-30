# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 17:32:33 by tpirinen          #+#    #+#              #
#    Updated: 2025/04/30 13:56:51 by tpirinen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# variables
NAME = libft.a

COMPILER = cc

COMPILERFLAGS = -Wall -Wextra -Werror

SRC	=	ft_isalnum.c	ft_isalpha.c	ft_isascii.c	ft_isdigit.c	\
		ft_isprint.c	ft_tolower.c	ft_toupper.c					\
		\
		ft_bzero.c		ft_calloc.c		ft_memchr.c		ft_memcmp.c		\
		ft_memcpy.c		ft_memmove.c	ft_memset.c						\
		\
		ft_atoi.c		ft_itoa.c		ft_split.c		ft_strchr.c		\
		ft_strdup.c		ft_striteri.c	ft_strjoin.c	ft_strlcat.c	\
		ft_strlcpy.c	ft_strlen.c		ft_strmapi.c	ft_strncmp.c	\
		ft_strnstr.c	ft_strrchr.c	ft_strtrim.c	ft_substr.c		\
		\
		ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c

BONUS_SRC = ft_lstnew_bonus.c	ft_lstadd_front_bonus.c	ft_lstsize_bonus.c		\
			ft_lstlast_bonus.c	ft_lstadd_back_bonus.c	ft_lstdelone_bonus.c	\
			ft_lstclear_bonus.c	ft_lstiter_bonus.c		ft_lstmap_bonus.c

OBJS = $(SRC:.c=.o)

BONUS_OBJS = $(BONUS_SRC:.c=.o)

.c.o:
	$(COMPILER) $(COMPILERFLAGS) -c $< -o $@

# rules
all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $^
		@echo "\nlib created"

run: all tests fclean

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME) exec

re: fclean all

bonus: $(BONUS_OBJS)
		ar rcs $(NAME) $^
		@echo "\nlib created"

.PHONY: all clean fclean re