/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 05:41:54 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/16 16:11:57 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	char	*map;
	char	**matrix;
	int		fd;
	int		i;

	i = 1;
	map = NULL;
	while (argv[i] != '\0')
	{
		fd = open(argv[i], O_RDONLY | O_APPEND);
		if (argc < 2)
			return (0);
		else
		{
			map = read_map(map, fd);
			if (map_is_valid(map) == 1)
			{
				matrix = string_to_matrix(map);
				//find_square(matrix);
				print_result(map, matrix);
			}
		}
		i++;
	}
	return (0);
}
