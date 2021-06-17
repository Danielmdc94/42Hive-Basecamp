/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikarjala <ikarjala@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 07:01:54 by ikarjala          #+#    #+#             */
/*   Updated: 2021/06/12 16:10:46 by ikarjala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		count_digits(int nb)
{
	int a;

	if (nb == 0)
		return (1);
	a = 0;
	while (nb != 0)
	{
		a++;
		nb /= 10;
	}
	return (a);
}

void	ft_putnbr(int nb)
{
	int		a;
	int		nbcp;
	char	dgt[count_digits(nb)];

	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
	a = count_digits(nb) - 1;
	nbcp = a;
	if (nb < 0)
		ft_putchar('-');
	else
		nb = -nb;
	while (nb != 0)
	{
		dgt[a--] = -(nb % 10) + '0';
		nb /= 10;
	}
	a = 0;
	while (a <= nbcp)
		ft_putchar(dgt[a++]);
	ft_putchar('\0');
}
