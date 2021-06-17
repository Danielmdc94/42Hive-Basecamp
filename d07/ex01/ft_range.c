/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 07:50:00 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/03 20:27:05 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int len;
	int i;
	int min_c;

	i = 0;
	min_c = min;
	len = max - min;
	range = (int*)malloc(len);
	if (min >= max)
		return (NULL);
	while (min_c < max)
	{
		range[i] = min_c;
		i++;
		min_c++;
	}
	return (range);
}
