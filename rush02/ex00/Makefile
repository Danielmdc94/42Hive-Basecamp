# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/12 10:46:05 by ikarjala          #+#    #+#              #
#    Updated: 2021/06/13 20:24:13 by okinnune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN =	rush-2
SRCFOLD = sources/
SRC =	$(SRCFOLD)main.c $(SRCFOLD)ft_strs.c $(SRCFOLD)testrushes.c \
 		$(SRCFOLD)/rush/rush00.c $(SRCFOLD)/rush/rush01.c $(SRCFOLD)/rush/rush02.c \
		$(SRCFOLD)/rush/rush03.c $(SRCFOLD)/rush/rush04.c $(SRCFOLD)/ft_putnbr.c $(SRCFOLD)/dynmem.c
OBJ =	main.o ft_strs.o testrushes.o rush00.o rush01.o rush02.o rush03.o rush04.o ft_putnbr.o dynmem.o
INCLUDE = ./
FLAGS =	-Wall -Wextra -Werror -c

all:
	gcc	$(FLAGS)\
		$(SRC) \
	-I	$(INCLUDE)

	gcc	$(OBJ) \
	-o	$(BIN)

#-------------------------------------------------------------------------------
clean:
	rm -f	$(OBJ)
#-------------------------------------------------------------------------------
fclean: clean
	rm -f	$(BIN)
#-------------------------------------------------------------------------------
re: fclean all
