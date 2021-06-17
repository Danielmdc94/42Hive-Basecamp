/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:12:15 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/10 16:35:44 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ex00.h"

void	print_file(int fd, int ret, char *buf)
{
	while ((ret = read(fd, buf, 1)) != 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}