/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_result.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:44:24 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/16 16:17:38 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_result(char *map, char **matrix)
{
	int x;
	int y;
	int len;
	int height;

	len = get_len(map);
	height = atoi(map);

	x = 0;
		while (x < len)
		{
			y = 0;
			while (y < height)
			{
				ft_putchar(1, matrix[x][y]);
				y++;
			}
			ft_putchar(1, '\n');
			x++;
		}
}