/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_is_valid.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:35:43 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/16 08:08:01 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		check_char(char *map)
{
	int		i;
	char	empty;
	char	obstacle;
	char	full;

	i = 0;
	while (map[i] >= '0' && map[i] <= '9')
		i++;
	empty = map[i];
	i++;
	obstacle = map[i];
	i++;
	full = map[i];
	if ((empty != obstacle && empty != full) && obstacle != full)
		while (map[i] != '\0')
		{
			if (map[i] != empty && map[i] != obstacle)
			{
				if (map[i] != full && map[i] != '\n')
					return (0);
			}
			i++;
		}
	return (1);
}

int		get_len(char *map)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	while (map[i] != '\n')
	{
		len++;
		i++;
	}
	return (len);
}

int		check_len(char *map)
{
	int i;
	int count;
	int len;

	len = get_len(map);
	i = 0;
	while (map[i] != '\n')
		i++;
	i++;
	count = 0;
	while (map[i] != '\0')
	{
		while (map[i] != '\n')
		{
			count++;
			i++;
		}
		if (count != len)
			return (0);
		count = 0;
		i++;
	}
	return (1);
}

int		check_square(char *map, char empty)
{
	int i;

	i = 0;
	while (map[i] >= '0' && map[i] <= '9')
		i++;
	empty = map[i];
	while (map[i] != '\n')
		i++;
	while (map[i] != '\0')
	{
		if (map[i] == empty)
			return (1);
		i++;
	}
	return (0);
}

int		map_is_valid(char *map)
{
	char	empty;

	empty = 0;
	if (check_char(map) == 1 && check_len(map) == 1)
	{
		if (check_square(map, empty) == 1)
			return (1);
		else
		{
			ft_puterr("Map error.\n");
			return (0);
		}
	}
	else
	{
		ft_puterr("Map error.\n");
		return (0);
	}
}
