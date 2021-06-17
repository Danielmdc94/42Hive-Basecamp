/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:21:09 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/16 18:16:34 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		bsq(char **matrix int x, int y)
{
	int x;
	int y;
	char empty;
	char obstacle;
	char full;

	x = 0;
	y = 0;

	if (y == height)
	{
		x++;
		y = 0;
	}
	
	if (matrix[x][y] == obstacle)
		return(bsq(matrix, x, y + 1));
	while (matrix[x][y] == empty)
	{
			if (bsq( matrix, x, y + 1) == 1)
		return (1);
			//magic
		x++;
	}
}