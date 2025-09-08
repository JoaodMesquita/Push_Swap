# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joapedro <joapedro@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 10:16:30 by joapedro          #+#    #+#              #
#    Updated: 2025/09/08 10:31:02 by joapedro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = src/main.c src/operations.c src/parsing.c src/sorting.c src/utils.c src/operations2.c src/index_stack.c src/is_sorted.c
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