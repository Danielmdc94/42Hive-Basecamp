/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argc_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 13:32:35 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/10 14:51:39 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ex00.h"

int		argc_error(int argc)
{
	if (argc < 2)
	{
		ft_puterr("File name missing.\n");
		return (0);
	}
	else if (argc > 2)
	{
		ft_puterr("Too many arguments.\n");
		return (0);
	}
	return (1);
}
