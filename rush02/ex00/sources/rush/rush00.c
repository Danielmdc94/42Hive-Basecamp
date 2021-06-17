/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 23:23:22 by okinnune          #+#    #+#             */
/*   Updated: 2021/06/13 20:35:29 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		tableindexer00(int posx, int posy, int x, int y)
{
	if ((posx == 0 && posy == 0) || (posx == x - 1 && posy == 0))
		return (1);
	else if ((posx == 0 && posy == y) || (posx == x - 1 && posy == y))
		return (1);
	else if (posx == 0 || posx == x - 1)
		return (2);
	else if (posy == 0 || posy == y)
		return (3);
	return (0);
}

char	*rush00(int x, int y, char *chartable)
{
	int		posx;
	int		posy;
	char	*result;
	int		ri;

	result = malloc(sizeof(char) * (x + 1) * (y + 1) + 1);
	posx = -1;
	posy = -1;
	ri = 0;
	while (posy++ < y)
	{
		while (posx++ < x - 1)
		{
			result[ri] = chartable[tableindexer00(posx, posy, x, y)];
			if (posx == x - 1)
			{
				ri++;
				result[ri] = '\n';
			}
			ri++;
		}
		posx = -1;
	}
	result[ri] = '\0';
	return (result);
}
