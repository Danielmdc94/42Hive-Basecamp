/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 06:13:21 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/10 14:47:12 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ex00.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[1];

	ret = 0;
	if (argc != 2)
		argc_error(argc);
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY | O_APPEND);
		if (fd == -1)
			ft_puterr("open() error.\n");
		else
			print_file(fd, ret, buf);
		if (close(fd) != 0)
			ft_puterr("\nclose() error.\n");
		ft_putchar(1, '\n');
	}
	return (0);
}
