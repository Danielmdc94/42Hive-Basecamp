# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/14 05:41:51 by dpalacio          #+#    #+#              #
#    Updated: 2021/06/16 20:32:02 by dpalacio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN =	bsq
SRC =	main.c map_is_valid.c print_result.c read_map.c string_to_matrix.c sources/*.c
OBJ =	main.o map_is_valid.o print_result.o read_map.o string_to_matrix.o 
INCLUDE = ./
FLAGS =	-Wall -Wextra -Werror

all:
	gcc	$(FLAGS)\
		$(SRC) \
	-I$(INCLUDE) -o $(BIN)

#-------------------------------------------------------------------------------
clean:
	rm -f	$(OBJ)
#-------------------------------------------------------------------------------
fclean: clean
	rm -f	$(BIN)
#-------------------------------------------------------------------------------
re: fclean all
