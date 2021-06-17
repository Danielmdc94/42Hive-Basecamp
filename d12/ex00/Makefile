# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/07 09:40:43 by dpalacio          #+#    #+#              #
#    Updated: 2021/06/10 16:32:43 by dpalacio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = argc_error.c ft_puterr.c ft_putchar.c ft_putstr.c main.c print_file.c

all: $(NAME)
	
$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all


