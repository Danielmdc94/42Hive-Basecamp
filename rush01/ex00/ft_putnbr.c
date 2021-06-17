/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:28:33 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/06 19:17:10 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudolib.h"

void	ft_putnbr(int nb)
{
	int		i;
	char	*str;

	if (nb == -2147483648)
	{
		i = 0;
		str = "-2147483648";
		while (str[i] != '\0')
		{
			ft_putchar(str[i++]);
		}
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb <= 9)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
