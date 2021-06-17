/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 19:42:34 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/16 08:04:11 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	*read_map(char *map, int fd)
{
	int		ret;
	char	buf[10000];
	int		i;

	if (fd == -1)
		ft_puterr("open() error.\n");
	else
	{
		while ((ret = read(fd, buf, sizeof(buf))) != 0)
		{
			map = (char *)malloc(sizeof(map) * (ret + 1));
			i = 0;
			while (i < ret)
			{
				map[i] = buf[i];
				i++;
			}
			map[i] = '\0';
		}
	}
	if (close(fd) != 0)
		ft_puterr("\nclose() error.\n");
	ft_putchar(1, '\n');
	return (map);
}
