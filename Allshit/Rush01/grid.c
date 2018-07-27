/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboutoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 12:39:40 by bboutoil          #+#    #+#             */
/*   Updated: 2018/07/15 21:33:08 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int **create_grid()
{
	int **ptr_tab;
	int idx;

	idx = 0;
	ptr_tab = malloc(9 * sizeof(*ptr_tab));
	if (ptr_tab == NULL) 
		return NULL;
	while (idx < 9)
	{
		ptr_tab[idx] = malloc(9 * sizeof(*(ptr_tab[idx])));
		if (ptr_tab[idx] == NULL)
			return NULL;
		idx++;
	}
	return ptr_tab;
}

void	init_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	destroy_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	while(i < 9)
	{
		j = 0;
		while(j < 9)
		{
			free(&grid[i][j]);
			j++;
		}
		i++;
	}
	i = 0;
	while(i < 9)
	{
		free(&grid[i]);
		i++;
	}
	free(grid);
}
