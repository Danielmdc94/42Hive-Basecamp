/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekantane <ekantane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 14:55:28 by ekantane          #+#    #+#             */
/*   Updated: 2021/06/16 15:28:48 by ekantane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	find_square(char **map)

char	**matrix;
char	**square;
int		i;
int		j;
int		width;
int		heigth;
int		max_of_s;
int		max_i;
int		max_j;

i = 0;
j = 0;

// matrix[width][height]
// square[width][height]

// set height of square[][]
while (i < heigth)
{
	square[0] = matrix[i][0];
	i++;	
}

// set width of square[][]
while (j < width)
{
	square[j][0] = matrix[j][0];
	j++;	
}

// set the rest
i = 1;
while (i < heigth)
{
	i++;
	j = 1;
	while(j < width)
	{
	j++
    if(matrix[i][j] == 1)
	{
		square[i][j] = min(square[i][j-1], square[i-1][j], square[i-1][j-1]) + 1;
		}
    else
	{
        square[i][j] = 0;
    }
}

// find the maximum entry, and indexes of maximum entry
i = 0;
j = 0;
max_of_s = square[0][0];
max_i = 0;
max_j = 0;
while(i < heigth)
{
	i++;
    while(j < width)
	j++
    {
    if(max_of_s < square[i][j])
    {
        max_of_s = square[i][j];
        max_i = i;
        max_j = j;
    }    
    }                
}    





// get the minimum of three values
int min(int a, int b, int c)
{
int m = a;
if (m > b)
    m = b;
if (m > c)
    m = c;
return m;
}