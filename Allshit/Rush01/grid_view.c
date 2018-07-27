/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_view.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboutoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:26:35 by bboutoil          #+#    #+#             */
/*   Updated: 2018/07/14 19:52:11 by bboutoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	show_grid(int **grid)
{
	int row;
	int col;
	char num;

	row = 0;
	while(row < 9)
	{
		col = 0;
		while(col < 9)
		{
			ft_putchar(grid[row][col]);
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
