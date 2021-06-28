/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 06:53:20 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/07 15:10:16 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "testlib.h"

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putnbr(int *nbr)
{
	write(1, &nbr, sizeof(int));
	return(0);
}

int	main(void)
{
	//ft_print_alphabet();
	//ft_print_reverse_alphabet();
	//ft_print_numbers();
	//ft_is_negative(-2);
	//ft_print_comb();
	//ft_print_comb2();
	//ft_putnbr(N)

	return (0);
}
