/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 09:51:49 by mangheli          #+#    #+#             */
/*   Updated: 2021/06/06 19:22:45 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_sudolib.h"

void	ft_run(int **buff)
{
	int x;
	int y;

	if (ft_sudoku(buff, 0, 0) == 1)
	{
		x = 0;
		while (x < 9)
		{
			y = 0;
			while (y < 9)
			{
				ft_putnbr(buff[x][y]);
				y++;
				ft_putchar(' ');
			}
			ft_putchar('\n');
			x++;
		}
	}
	else
		ft_putstr("Error\n");
}

int		ft_error(char *argv)
{
	int y;

	y = 0;
	while (y <= 8)
	{
		if (argv[y] != '.')
		{
			if (argv[y] < '1' || argv[y] > '9')
				return (1);
		}
		y++;
	}
	return (0);
}

int		ft_main_error(int argc, char **argv)
{
	int x;

	if (argc != 10)
		return (1);
	else
	{
		x = 1;
		while (x < 10)
		{
			if (ft_strlen(argv[x]) != 10)
				return (1);
			else
			{
				if (ft_error(argv[x]) == 1)
					return (1);
			}
			x++;
		}
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int **buff;
	int error;

	error = ft_main_error(argc, argv);
	if (error == 0)
	{
		buff = malloc(9 * sizeof(int*));
		ft_copy(argv, buff);
		ft_run(buff);
	}
	else
		ft_putstr("Error\n");
	return (0);
}
