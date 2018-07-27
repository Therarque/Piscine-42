/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoulin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 12:16:34 by smoulin           #+#    #+#             */
/*   Updated: 2018/07/22 20:54:16 by qbenaroc         ###   ########.fr       */
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
			if ((i == 1 || i == x) && j == 1)
				ft_putchar('A');
			else if ((i == 1 || i == x) && j == y)
				ft_putchar('C');
			else if ((i > 1 && i < x && j == 1) || (i > 1 && i < x && j == y)
					|| ((i == 1 || i == x) && (j != 1 && j != y)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			i++;
		}
		i = resetline(x, i);
		j++;
	}
}
