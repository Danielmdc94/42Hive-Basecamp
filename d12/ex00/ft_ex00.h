/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ex00.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 06:54:31 by dpalacio          #+#    #+#             */
/*   Updated: 2021/06/10 16:38:34 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_EX00_H
# define FT_EX00_H
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		argc_error(int argc);
int		ft_close(int fd);
int		ft_putchar(int fd, char c);
void	ft_putstr(char *str);
void	ft_puterr(char *str);
void	print_file(int fd, int ret, char *buf);

#endif
