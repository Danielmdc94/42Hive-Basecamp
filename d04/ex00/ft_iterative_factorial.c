/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 04:15:04 by dpalacio          #+#    #+#             */
/*   Updated: 2021/05/29 20:31:29 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fct;
	int a;

	if (nb < 0)
	{
		return (0);
	}
	a = 1;
	fct = 1;
	while (a <= nb)
	{
		fct = fct * a;
		a++;
	}
	return (fct);
}
