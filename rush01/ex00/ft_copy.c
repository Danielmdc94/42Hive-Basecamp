/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 19:11:55 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/06 19:26:55 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_copy(char **argv, int **buff)
{
	int x;
	int y;

	x = 0;
	while (x < 9)
	{
		buff[x] = malloc(9 * sizeof(int));
		y = 0;
		while (y < 9)
		{
			if (argv[x + 1][y] == '.')
				buff[x][y] = 0;
			else
				buff[x][y] = argv[x + 1][y] - '0';
			y++;
		}
		x++;
	}
}
