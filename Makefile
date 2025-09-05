# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpmesquita <jpmesquita@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 10:16:30 by joapedro          #+#    #+#              #
#    Updated: 2025/09/05 12:49:55 by jpmesquita       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = src/main.c src/operations.c src/parsing.c src/sorting.c src/utils.c src/operations2.c
OBJS := $(SRC:%.c=%.o)

CC = cc
RM = rm -f

LIBFT = libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g


all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	make -C libft/ clean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re