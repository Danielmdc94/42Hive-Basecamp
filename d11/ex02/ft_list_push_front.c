/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:12:41 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/09 18:17:51 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;
	t_list *head;
	t_list *new_head;

	new_elem = ft_create_elem(data);
	if (!*begin_list)
	{
		*begin_list = new_elem;
		return ;
	}
	else
	{
		head = *begin_list;
		new_head = new_elem;
		new_head->next = head;
		*begin_list = new_head;
	}
}
