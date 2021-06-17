/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:38:25 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/06 19:23:46 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_checkrow(int **buff, int x, int n)
{
	int i;

	i = 0;
	while (i <= 8)
	{
		if (buff[x][i] == n)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkcolumn(int **buff, int y, int n)
{
	int i;

	i = 0;
	while (i <= 8)
	{
		if (buff[i][y] == n)
			return (0);
		i++;
	}
	return (1);
}

int	ft_checkbox(int **buff, int x, int y, int n)
{
	int i;
	int j;
	int start_x;
	int start_y;

	start_x = x - (x % 3);
	start_y = y - (y % 3);
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (buff[i + start_x][j + start_y] == n)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_check(int **buff, int x, int y, int n)
{
	if (ft_checkrow(buff, x, n) == 0)
		return (0);
	else if (ft_checkcolumn(buff, y, n) == 0)
		return (0);
	else if (ft_checkbox(buff, x, y, n) == 0)
		return (0);
	else
		return (1);
}
