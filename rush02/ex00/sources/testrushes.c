/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testrushes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 16:11:07 by okinnune          #+#    #+#             */
/*   Updated: 2021/06/13 20:35:23 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	printresult(int rushn, int x, int y, int mc)
{
	if (mc >= 2)
		ft_putstr(" || ");
	ft_putstr("[rush-");
	ft_putchar(0 + '0');
	ft_putchar(rushn + '0');
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

int		testmatch(char *stdin, char *rout)
{
	int i;

	i = 0;
	while (stdin[i] != '\0')
	{
		if (stdin[i] != rout[i])
			return (0);
		i++;
	}
	return (1);
}

void	printend(int mc, int x, int y)
{
	if (mc == 0)
		ft_putstr("None");
	else
	{
		if (x == y)
			printsquare(x, y);
		printrect(x, y);
	}
	ft_putchar('\n');
}

void	testrushes(char *buf, int x, int y)
{
	char	*rushres;
	int		mc;

	mc = 0;
	rushres = rush00(x, y - 1, " o|-");
	if ((mc += testmatch(buf, rushres)) >= 1 && testmatch(buf, rushres) == 1)
		printresult(0, x, y, mc);
	rushres = rush01(x, y - 1, " /*\\");
	if ((mc += testmatch(buf, rushres)) >= 1 && testmatch(buf, rushres) == 1)
		printresult(1, x, y, mc);
	rushres = rush02(x, y - 1, " ABC");
	if ((mc += testmatch(buf, rushres)) >= 1 && testmatch(buf, rushres) == 1)
		printresult(2, x, y, mc);
	rushres = rush03(x, y - 1, " ABC");
	if ((mc += testmatch(buf, rushres)) >= 1 && testmatch(buf, rushres) == 1)
		printresult(3, x, y, mc);
	rushres = rush04(x, y - 1, " ABC");
	if ((mc += testmatch(buf, rushres)) >= 1 && testmatch(buf, rushres) == 1)
		printresult(4, x, y, mc);
	printend(mc, x, y);
}
