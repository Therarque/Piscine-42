/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qbenaroc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 21:28:51 by qbenaroc          #+#    #+#             */
/*   Updated: 2018/07/22 16:56:29 by qbenaroc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/colle02.h"

char	*ft_rush01(int x, int y, int k, char *tab01)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (++j <= y && x > 0 && y > 0)
	{
		while (i <= x)
		{
			if (((i == x && j == 1) && x != 1) || ((j == y && i == 1) &&
						y != 1))
				tab01[k++] = '\\';
			else if ((i == 1 && j == 1) || (i == x && j == y))
				tab01[k++] = '/';
			else if ((i > 1 && i < x && j == 1) || (i > 1 && i < x && j == y)
					|| ((i == 1 || i == x) && (j != 1 && j != y)))
				tab01[k++] = '*';
			else
				tab01[k++] = ' ';
			i++;
		}
		tab01[k++] = '\n';
		i = 1;
	}
	return (tab01);
}

char	*ft_push_rush01_intab(int x, int y)
{
	char	*tab01;
	int		tabsize;

	tabsize = (x * y) + y + 1;
	if (!(tab01 = (char*)malloc(sizeof(char) * tabsize)))
		return (0);
	tab01 = ft_rush01(x, y, 0, tab01);
	tab01[tabsize] = '\0';
	return (tab01);
}
