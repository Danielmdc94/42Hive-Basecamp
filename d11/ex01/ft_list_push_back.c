/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 10:52:58 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/09 19:29:41 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *head;

	new_elem = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = new_elem;
		return ;
	}
	head = *begin_list;
	while (head->next != 0)
	{
		head = head->next;
	}
	head->next = new_elem;
}
