/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaira <tsaira@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 13:26:41 by tsaira            #+#    #+#             */
/*   Updated: 2021/05/30 17:26:34 by tsaira           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
void	print_top(int x);
void	print_middle(int x, int y);
void	print_bottom(int x, int y);

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		print_top(x);
		print_middle(x, y);
		print_bottom(x, y);
	}
}

void	print_top(int x)
{
	int	width;

	width = 1;
	ft_putchar('A');
	while (width < (x - 1))
	{
		ft_putchar('B');
		width++;
	}
	if (width == (x - 1))
		ft_putchar('A');
	ft_putchar('\n');
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
			ft_putchar('B');
		while (width < (x - 1))
		{
			ft_putchar(' ');
			width++;
		}
		if (width == (x - 1))
			ft_putchar('B');
		ft_putchar('\n');
		height++;
		width = 1;
	}
}

void	print_bottom(int x, int y)
{
	int	width;

	width = 1;
	if (y > 1 && x > 0)
	{
		ft_putchar('C');
		while (width < (x - 1))
		{
			width++;
			ft_putchar('B');
		}
		ft_putchar('C');
		ft_putchar('\n');
	}
}
