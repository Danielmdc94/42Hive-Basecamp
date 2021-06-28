/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 08:05:36 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/02 09:45:12 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#define LOW_LIMIT -2147483648

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}


void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb <= 2147483647 && nb >= -2147483647)
	{
		if (nb > 9 || nb < -9)
			ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
		//ft_putchar('message here');
	}
}

int	ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	return (index);
}

int main () 
{
   char str1[] = "ABCDEF";
   char str2[] = "1234sgsgdfgrehhe";
   int ret1;
   int ret2;
   
   ret1 = ft_strlen(str1);
   ret2 = ft_strlen(str2);

	ft_putnbr(ret1);
	ft_putchar('\n');
	ft_putnbr(ret2);
	ft_putchar('\n');
   
   return(0);
}