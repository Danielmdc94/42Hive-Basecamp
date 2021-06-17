/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okinnune <okinnune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 19:11:04 by swilliam          #+#    #+#             */
/*   Updated: 2021/06/13 20:24:34 by okinnune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <stdlib.h>
# include <unistd.h>

# define BUFSIZE 256

char	*tocopybuf(char *from, int size);
char	*fromcopybuf(char *from, int size);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	printrect(int x, int y);
void	printsquare(int x, int y);
char	*rush00(int x, int y, char *chartable);
char	*rush01(int x, int y, char *chartable);
char	*rush02(int x, int y, char *chartable);
char	*rush03(int x, int y, char *chartable);
char	*rush04(int x, int y, char *chartable);
void	printend(int mc, int x, int y);
void	testrushes(char *buf, int x, int y);

#endif
