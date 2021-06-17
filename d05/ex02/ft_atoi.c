/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 14:47:52 by dpalacio          #+#    #+#             */
/*   Updated: 2021/05/31 19:16:01 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int index;
	int result;
	int sign;

	index = 0;
	result = 0;
	sign = 1;
	while (str[index] == ' ' || str[index] == 9 || str[index] == '\n')
		index++;
	if (str[index] == '+' && str[index + 1] != '-')
	{
		index++;
	}
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		result = result * 10 + str[index] - '0';
		index++;
	}
	return (result * sign);
}
