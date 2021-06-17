/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudolib.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvaisane <wvaisane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:32:16 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/06 19:29:01 by wvaisane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOLIB_H
# define FT_SUDOLIB_H

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_copy(char **argv, int **buff);
int		ft_sudoku(int **buff, int x, int y);
int		ft_check(int **buff, int x, int y, int n);
int		ft_checkbox(int **buff, int x, int y, int n);
int		ft_checkcolumn(int **buff, int y, int n);
int		ft_checkrow(int **buff, int x, int n);

#endif
