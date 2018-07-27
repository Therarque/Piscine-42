/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid_logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboutoil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 18:29:20 by bboutoil          #+#    #+#             */
/*   Updated: 2018/07/14 19:03:28 by bboutoil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_num_is_in_row(int **grid, int row, int num)
{
	int		idx;
	
	idx = 0;
	while (idx < 9)
	{
		if (grid[row][idx] == num)
			return 1;
		idx++;
	}
	return (0);
}

int		is_num_is_in_col(int **grid, int col, int num)
{
	int		idx;

	idx = 0;
	while(idx < 9)
	{

		if(grid[idx][col] == num)
			return 1;
		idx++;
	}
	return (0);
}

int		is_num_is_in_box(int **grid, int start_row, int start_col, int num)
{
	int row;
	int col;

	row = 0;
	col = 0;
	while(row < 3)
	{
		while(col <3)
		{
			if(grid[start_row + row][start_col + col])
				return (1);
			col++;
		}
		row++;
	}
	return (0);
}

int		get_first_empty_place(int **grid, int *row, int *col)
{
	row = 0;
	col = 0;

	while(row < 9)
	{
		while(col < 9)
		{
			if(grid[row][col] == 0)
			{
				return (1);
			}
			col++;
		}
		row++;
	}
	return (0);
}
