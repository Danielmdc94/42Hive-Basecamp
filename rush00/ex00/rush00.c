/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 12:01:15 by dpalacio          #+#    #+#             */
/*   Updated: 2021/05/30 12:03:43 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_bound(int x);
void	print_middle(int x, int y);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_bound(x);
		print_middle(x, y);
		if (y > 1)
			print_bound(x);
	}
}

void	print_bound(int x)
{
	int width;

	if (x > 0)
	{
		width = 1;
		if (width == 1)
			ft_putchar('o');
		while (width < (x - 1))
		{
			width++;
			ft_putchar('-');
		}
		if (width == (x - 1))
			ft_putchar('o');
		ft_putchar('\n');
	}
}

void	print_middle(int x, int y)
{
	int width;
	int height;

	width = 1;
	height = 1;
	while (height <= (y - 2))
	{
		if (width == 1)
			ft_putchar('|');
		while (width < (x - 1))
		{
			width++;
			ft_putchar(' ');
		}
		if (width == (x - 1))
			ft_putchar('|');
		ft_putchar('\n');
		height++;
		width = 1;
	}
}
