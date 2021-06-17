/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:56:40 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/09 19:53:28 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		elem_count;
	t_list	*head;

	elem_count = 0;
	head = begin_list;
	while (head != 0)
	{
		head = head->next;
		elem_count++;
	}
	return (elem_count);
}
