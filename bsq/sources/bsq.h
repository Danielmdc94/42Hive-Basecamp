/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalacio <dpalacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 18:32:16 by wvaisane          #+#    #+#             */
/*   Updated: 2021/06/16 08:10:43 by dpalacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# include <stdio.h> //test

int		ft_atoi(char *str);
int		ft_putchar(int fd, char c);
void	ft_puterr(char *str);
void	ft_putstr(char *str);
char	*read_map(char *map, int fd);
int		check_char(char *map);
int		get_len(char *map);
int		check_len(char *map);
int		check_square(char *map, char empty);
int		map_is_valid(char *map);

#endif
