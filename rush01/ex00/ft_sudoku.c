/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 14:42:21 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/06 19:16:46 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudolib.h"

int	ft_sudoku(int **buff, int x, int y)
{
	int n;

	if (x == 8 && y == 9)
		return (1);
	if (y == 9)
	{
		x++;
		y = 0;
	}
	if (buff[x][y] > 0)
		return (ft_sudoku(buff, x, y + 1));
	n = 1;
	while (n <= 9)
	{
		if (ft_check(buff, x, y, n) == 1)
		{
			buff[x][y] = n;
			if (ft_sudoku(buff, x, y + 1) == 1)
				return (1);
		}
		buff[x][y] = 0;
		n++;
	}
	return (0);
}
