/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 17:23:43 by wvaisane          #+#    #+#             */
/*   Updated: 2021/05/30 17:38:18 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_top(int x);
void	print_middle(int x, int y);
void	print_bottom(int x);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_top(x);
		print_middle(x, y);
		if (y > 1)
		{
			print_bottom(x);
		}
	}
}

void	print_top(int x)
{
	int width;

	if (x > 0)
	{
		width = 1;
		if (width == 1)
			ft_putchar('/');
		while (width < (x - 1))
		{
			width++;
			ft_putchar('*');
		}
		if (width == (x - 1))
			ft_putchar('\\');
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
			ft_putchar('*');
		while (width < (x - 1))
		{
			width++;
			ft_putchar(' ');
		}
		if (width == (x - 1))
			ft_putchar('*');
		ft_putchar('\n');
		height++;
		width = 1;
	}
}

void	print_bottom(int x)
{
	int width;

	if (x > 0)
	{
		width = 1;
		if (width == 1)
			ft_putchar('\\');
		while (width < (x - 1))
		{
			width++;
			ft_putchar('*');
		}
		if (width == (x - 1))
			ft_putchar('/');
		ft_putchar('\n');
	}
}
