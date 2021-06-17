/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_to_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 10:19:06 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/16 15:41:07 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	**mem_alloc(char *map, char **matrix)
{
	int		len;
	int		height;
	int		h;
	len = get_len(map);
	height = atoi(map);
	matrix = (char**)malloc(sizeof(*matrix) * height);
	h = 0;
	while (h < height)
	{
		matrix[h] = (char*)malloc(sizeof(char) * len);
		h++;
	}
	return (matrix);
}

char	**string_to_matrix(char *map)
{
	char	**matrix = NULL;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	matrix = mem_alloc(map, matrix);
	while (map[i] != '\n')
		i++;
	i++;
	while (map[i] != '\0')
	{
		while (map[i] != '\n')
		{
			matrix[x][y] = map[i];
			i++;
			y++;
		}
		y = 0;
		i++;
		x++;
	}
	return (matrix);
}
