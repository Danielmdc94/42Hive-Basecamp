/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:43:57 by okinnune          #+#    #+#             */
/*   Updated: 2021/06/13 20:35:09 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	countbuffersize(char buf[BUFSIZE])
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			y++;
		if (y == 0)
			x++;
		i++;
	}
	testrushes(buf, x, y);
}

void	handlebuf(char *buf, int b_read)
{
	if (b_read == 0)
		printend(0, 0, 0);
	else
		countbuffersize(buf);
}

void	readstdin(int res)
{
	char	*mainbuf;
	char	*cbuf;
	int		curbufsize;
	char	buf_sml[1];
	int		b_read;

	mainbuf = malloc(BUFSIZE);
	curbufsize = BUFSIZE;
	b_read = 0;
	res = read(0, buf_sml, 1);
	while (res != 0)
	{
		if (b_read > curbufsize)
		{
			cbuf = tocopybuf(mainbuf, curbufsize);
			curbufsize += BUFSIZE;
			mainbuf = fromcopybuf(cbuf, curbufsize);
		}
		mainbuf[b_read] = buf_sml[0];
		res = read(0, buf_sml, 1);
		b_read++;
	}
	mainbuf[b_read] = '\0';
	handlebuf(mainbuf, b_read);
}

int		main(void)
{
	readstdin(0);
	return (0);
}
