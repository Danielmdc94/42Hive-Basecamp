/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynmem.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 20:18:52 by okinnune          #+#    #+#             */
/*   Updated: 2021/06/13 20:19:04 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	*tocopybuf(char *from, int size)
{
	char	*newbuf;
	int		i;

	newbuf = malloc(size);
	i = 0;
	while (i < size + 1)
	{
		if (from[i] != '\0')
			newbuf[i] = from[i];
		i++;
	}
	return (newbuf);
}

char	*fromcopybuf(char *from, int size)
{
	char	*newbuf;
	int		i;

	newbuf = malloc(size);
	i = 0;
	while (i < size - BUFSIZE + 1)
	{
		if (from[i] != '\0')
			newbuf[i] = from[i];
		i++;
	}
	return (newbuf);
}
