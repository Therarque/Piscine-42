/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamaurer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 20:45:18 by mamaurer          #+#    #+#             */
/*   Updated: 2018/07/19 07:53:12 by mamaurer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	porte(int *i, int *width_door, int space, int door_size)
{
	int key_pos;

	key_pos = door_size / 2;
	if ((door_size > 3) && (space == key_pos)
			&& (*width_door == (door_size / 2) - 1))
		ft_putchar('$');
	else
		ft_putchar('|');
	*i += 1;
	*width_door += 1;
}

int		inner(int line_nb, int space, int door_size)
{
	int i;
	int width_door;

	width_door = -(door_size / 2);
	i = 0;
	while (i < space)
	{
		ft_putchar(' ');
		i++;
	}
	ft_putchar('/');
	i = 0;
	while (i <= line_nb * 2)
	{
		while ((i == line_nb + width_door) && (space < door_size)
				&& (width_door <= door_size / 2))
			porte(&i, &width_door, space, door_size);
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
	return (space - 1);
}

void	build(int space, int nb_jumps, int line_jump, int door_size)
{
	int i;
	int j;
	int jump;

	i = 0;
	j = 1;
	jump = 4;
	while (space + 1)
	{
		if (i == line_jump)
		{
			i += nb_jumps;
			space -= nb_jumps;
			line_jump = i + jump;
			jump++;
			if (j == 2)
			{
				nb_jumps++;
				j = 0;
			}
			j++;
		}
		space = inner(i, space, door_size);
		i++;
	}
}

void	sastantua(int size)
{
	int space;
	int i;
	int j;

	i = 1;
	j = 0;
	space = 0;
	if (size > 0)
	{
		while (i <= size)
		{
			space += 6 + j;
			if (i > 1)
				j++;
			if ((i > 1) && (i % 2))
				j++;
			i++;
		}
		if (!(size % 2))
			size--;
		build(space - 4, 2, 3, size);
	}
}

int		main(void)
{
	sastantua(5);
	return (0);
}
