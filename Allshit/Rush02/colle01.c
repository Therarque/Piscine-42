/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 10:42:56 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 20:53:08 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

int		resetline(int x, int i)
{
	if (x > 0)
	{
		ft_putchar('\n');
		i = 1;
	}
	return (i);
}

void	ft_rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		while (i <= x)
		{
			if (((i == x && j == 1) && x != 1) || ((j == y && i == 1) &&
						y != 1))
				ft_putchar('\\');
			else if ((i == 1 && j == 1) || (i == x && j == y))
				ft_putchar('/');
			else if ((i > 1 && i < x && j == 1) || (i > 1 && i < x && j == y)
					|| ((i == 1 || i == x) && (j != 1 && j != y)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		i = resetline(x, i);
		j++;
	}
}
