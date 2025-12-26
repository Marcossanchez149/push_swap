# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcsan2 <marcsan2@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/04 16:33:24 by marcsan2          #+#    #+#              #
#    Updated: 2025/12/26 16:03:26 by marcsan2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
EXEC = push_swap
CC = cc 
CFLAGS = -Wall -Wextra -Werror -I. -I./libft
LDFLAGS = -L./libft -lft
INCLUDE = -I. #(dir act) 
SRC_FILES = push_swap.c checker.c func.c push_stack.c reverse_rotate.c rotate_stack.c \
sorting_functions.c swap_stack.c final_rotate.c movements.c second_sorting_functions.c \
atoichecker.c free_stack.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME) $(EXEC)
	 $(MAKE) -C libft

$(NAME): $(OBJ_FILES) # no relink
	$(MAKE) -C libft
	ar rcs $(NAME) $(OBJ_FILES)

$(EXEC): $(OBJ_FILES)
		$(CC) $(OBJ_FILES) $(LDFLAGS) -o $(EXEC)

%.o: %.c #compiling from .c to .o
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean: #clean .o
	rm -f $(OBJ_FILES)
	$(MAKE) -C libft clean
	
fclean: #clean all
	rm -f $(NAME) $(OBJ_FILES)
	$(MAKE) -C libft fclean
	
re: fclean all #clean and remake

.PHONY: all clean fclean re bonus 